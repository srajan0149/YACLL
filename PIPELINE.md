# YAPL Compiler — Pipeline Documentation

## Overview

YAPL is a C-like language compiled via a **Lex + YACC** pipeline producing Three-Address Code (TAC) in quadruple format. The front-end covers lexical analysis, parsing, semantic analysis, and ICG with type checking.

---

## Modules

### 1. Lexer — `yapl.l`
- Tokenises keywords, identifiers, integer/float constants, string literals, and operators.
- Stores identifier text in `yylval.sval` (`strdup(yytext)`) for SDT actions.
- Tracks `yylineno` for error reporting.

### 2. Parser — `yapl.y`
Grammar: ANSI C99 extended with tensor types, slice expressions, and labelled loops.

**Key SDT actions (Syntax-Directed Translation):**

| Construct | Quads generated |
|---|---|
| Arithmetic `a + b` | `op arg1 arg2 → tN` |
| Unary minus `-a` | `minus a _ → tN` |
| Assignment `x = e` | `= e _ x` |
| Compound assign `x += e` | `+ x e → tN`, `= tN _ x` |
| `if (c) S` | `ifFalse c _ L1` … `label L1` |
| `if (c) S else S` | `ifFalse c _ L1`, `goto L2`, `label L1` … `label L2` |
| `while (c) S` | `label L1`, `ifFalse c _ L2` … `goto L1`, `label L2` |
| `for (i;c;s) S` | same as while with step expression |
| `do S while (c)` | `label L1` … `ifTrue c L1` |
| Function call `f(a,b)` | `param a`, `param b`, `call f 2 → tN` |
| `return e` | `return e` |
| `goto L` | `goto L` |

Control-flow labels are forward-patched using mid-rule actions and `$<sval>$` stack slots. The named non-terminal `if_cond` captures the condition once to avoid reduce/reduce conflicts.

### 3. Symbol Table — `symtab.c/h`
- **Scoped hash table** (djb2 hash, 256 buckets per scope, up to 64 nested scopes).
- `sym_enter_scope()` / `sym_exit_scope()` called on every `{` / `}`.
- `sym_declare(name, type)` called from `direct_declarator: IDENTIFIER` using `current_decl_type` (set by `type_specifier` rules: `INT→T_INT`, `FP/DOUBLE→T_FLOAT`, etc.).
- `sym_lookup(name)` searches inner→outer scope; returns `T_UNKNOWN` if undeclared.
- Types propagated into the ICG type map via `icg_set_type()` at every identifier use.

### 4. Intermediate Code Generator — `icg.c/h`

**Quad structure:**
```c
typedef struct { char op[32], arg1[64], arg2[64], result[64]; } Quad;
```

**Type system** — `IcgType`: `T_INT`, `T_FLOAT`, `T_STRING`, `T_UNKNOWN`

**Type checks inside `emit()`:**

| Check | Action |
|---|---|
| String operand in arithmetic | `ICG Error` — quad **skipped** |
| `int` + `float` mix | `ICG Note` (widening coercion), result typed `T_FLOAT` |
| Division/modulo by constant `0` | `ICG Warning` |

**Control-flow checks in parser:**

| Check | Action |
|---|---|
| `break` outside loop/switch | `ICG Error` |
| `continue` outside loop | `ICG Error` |

### 5. Parser Instrumentation — `parser_debug.c/h`, `lalr_table.c/h`, `parser_diag.c/h`
- **`parser_debug`**: traces derivation steps; exports `derivation.dot` (Graphviz).
- **`lalr_table`**: reconstructs the LALR(1) table from `y.output`; exports `parsing_table.csv`.
- **`parser_diag`**: emits structured syntax errors with state number, expected tokens, and a hint.

---

## Build

```bash
make        # builds ./yapl
make clean  # removes all generated files
```

Toolchain: `flex`, `yacc` (bison), `gcc -O3`.  
Objects linked: `parser_debug.o lalr_table.o parser_diag.o icg.o symtab.o`

---

## Output

For every valid input `./yapl <file>` prints:
1. Semantic statistics (declarations, constants, tensor ops, …)
2. Benchmarks (lexer throughput, parser time, memory)
3. **Quadruple IR table**

**Example** — `a = b * -c + b * -c`:
```
Index  | op     | arg1 | arg2 | result
0      | minus  | c    |      | t1
1      | *      | b    | t1   | t2
2      | minus  | c    |      | t3
3      | *      | b    | t3   | t4
4      | +      | t2   | t4   | t5
5      | =      | t5   |      | a
```

---

## Test Cases

| File | Covers |
|---|---|
| `icg_01.c` | Unary minus + multiply + add (spec example) |
| `icg_02.c` | Sequential assignments |
| `icg_03.c` | Division and modulo |
| `icg_04.c` | `if` without `else` |
| `icg_05.c` | `if-else` |
| `icg_06.c` | `while` loop |
| `icg_07.c` | `for` loop |
| `icg_08.c` | Nested `if` inside `while` |
| `icg_09.c` | Recursive function + `return` |
| `icg_10.c` | Logical `&&`, relational ops, type error detection |
