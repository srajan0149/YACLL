/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "yapl.y"

#include<stdio.h>
extern char *yytext;
extern int yylineno;
int global_declarations=0;
int func_definitions=0;
int int_consts=0;
int float_consts=0;
int string_literals=0;
int pointer_decls=0;
int tensor_definitions=0;
int slice_expressions_count=0;
int tensor_elementwise_ops=0;
int tensor_contractions=0;
int tensor_products=0;
int tensor_loops=0;
int loop_labels_count=0;
int labeled_breaks=0;
int labeled_continues=0;
int ifs_wo_else=0;
int ladder_len=0,hold=0;
int max=-1;
/* avoid implicit declarations in generated y.tab.c */
int yylex(void);
void yyerror(const char *);

#line 98 "yapl.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    I_CONSTANT = 259,              /* I_CONSTANT  */
    F_CONSTANT = 260,              /* F_CONSTANT  */
    STRING_LITERAL = 261,          /* STRING_LITERAL  */
    FUNC_NAME = 262,               /* FUNC_NAME  */
    SIZEOF = 263,                  /* SIZEOF  */
    PTR_OP = 264,                  /* PTR_OP  */
    INC_OP = 265,                  /* INC_OP  */
    DEC_OP = 266,                  /* DEC_OP  */
    LEFT_OP = 267,                 /* LEFT_OP  */
    RIGHT_OP = 268,                /* RIGHT_OP  */
    LE_OP = 269,                   /* LE_OP  */
    GE_OP = 270,                   /* GE_OP  */
    EQ_OP = 271,                   /* EQ_OP  */
    NE_OP = 272,                   /* NE_OP  */
    TH_OP = 273,                   /* TH_OP  */
    AND_OP = 274,                  /* AND_OP  */
    OR_OP = 275,                   /* OR_OP  */
    MUL_ASSIGN = 276,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 277,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 278,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 279,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 280,              /* SUB_ASSIGN  */
    LEFT_ASSIGN = 281,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 282,            /* RIGHT_ASSIGN  */
    AND_ASSIGN = 283,              /* AND_ASSIGN  */
    XOR_ASSIGN = 284,              /* XOR_ASSIGN  */
    OR_ASSIGN = 285,               /* OR_ASSIGN  */
    TYPEDEF_NAME = 286,            /* TYPEDEF_NAME  */
    ENUMERATION_CONSTANT = 287,    /* ENUMERATION_CONSTANT  */
    TYPEDEF = 288,                 /* TYPEDEF  */
    EXTERN = 289,                  /* EXTERN  */
    STATIC = 290,                  /* STATIC  */
    AUTO = 291,                    /* AUTO  */
    REGISTER = 292,                /* REGISTER  */
    INLINE = 293,                  /* INLINE  */
    CONST = 294,                   /* CONST  */
    RESTRICT = 295,                /* RESTRICT  */
    VOLATILE = 296,                /* VOLATILE  */
    BOOL = 297,                    /* BOOL  */
    CHAR = 298,                    /* CHAR  */
    SHORT = 299,                   /* SHORT  */
    INT = 300,                     /* INT  */
    LONG = 301,                    /* LONG  */
    SIGNED = 302,                  /* SIGNED  */
    UNSIGNED = 303,                /* UNSIGNED  */
    FP = 304,                      /* FP  */
    DOUBLE = 305,                  /* DOUBLE  */
    VOID = 306,                    /* VOID  */
    COMPLEX = 307,                 /* COMPLEX  */
    IMAGINARY = 308,               /* IMAGINARY  */
    STRUCT = 309,                  /* STRUCT  */
    UNION = 310,                   /* UNION  */
    ENUM = 311,                    /* ENUM  */
    ELLIPSIS = 312,                /* ELLIPSIS  */
    CASE = 313,                    /* CASE  */
    DEFAULT = 314,                 /* DEFAULT  */
    IF = 315,                      /* IF  */
    ELSE = 316,                    /* ELSE  */
    SWITCH = 317,                  /* SWITCH  */
    WHILE = 318,                   /* WHILE  */
    DO = 319,                      /* DO  */
    FOR = 320,                     /* FOR  */
    GOTO = 321,                    /* GOTO  */
    CONTINUE = 322,                /* CONTINUE  */
    BREAK = 323,                   /* BREAK  */
    RETURN = 324,                  /* RETURN  */
    ALIGNAS = 325,                 /* ALIGNAS  */
    ALIGNOF = 326,                 /* ALIGNOF  */
    ATOMIC = 327,                  /* ATOMIC  */
    GENERIC = 328,                 /* GENERIC  */
    NORETURN = 329,                /* NORETURN  */
    STATIC_ASSERT = 330,           /* STATIC_ASSERT  */
    THREAD_LOCAL = 331,            /* THREAD_LOCAL  */
    TEXT = 332,                    /* TEXT  */
    TENSOR = 333,                  /* TENSOR  */
    ITEM = 334,                    /* ITEM  */
    AXIS = 335,                    /* AXIS  */
    IN = 336,                      /* IN  */
    DOT_ADD = 337,                 /* DOT_ADD  */
    DOT_SUB = 338,                 /* DOT_SUB  */
    DOT_MUL = 339,                 /* DOT_MUL  */
    DOT_DIV = 340,                 /* DOT_DIV  */
    AT = 341,                      /* AT  */
    AT_MUL = 342,                  /* AT_MUL  */
    BACKTICK = 343                 /* BACKTICK  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 62 "yapl.y"

	int val;
	int ival;
    double fval;
    char *sval;
	struct symtab *symp;

#line 241 "yapl.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_I_CONSTANT = 4,                 /* I_CONSTANT  */
  YYSYMBOL_F_CONSTANT = 5,                 /* F_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 6,             /* STRING_LITERAL  */
  YYSYMBOL_FUNC_NAME = 7,                  /* FUNC_NAME  */
  YYSYMBOL_SIZEOF = 8,                     /* SIZEOF  */
  YYSYMBOL_PTR_OP = 9,                     /* PTR_OP  */
  YYSYMBOL_INC_OP = 10,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 11,                    /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 12,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 13,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 14,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 15,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 16,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 17,                     /* NE_OP  */
  YYSYMBOL_TH_OP = 18,                     /* TH_OP  */
  YYSYMBOL_AND_OP = 19,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 20,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 21,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 22,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 23,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 24,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 25,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 26,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 27,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 28,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 29,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 30,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPEDEF_NAME = 31,              /* TYPEDEF_NAME  */
  YYSYMBOL_ENUMERATION_CONSTANT = 32,      /* ENUMERATION_CONSTANT  */
  YYSYMBOL_TYPEDEF = 33,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 34,                    /* EXTERN  */
  YYSYMBOL_STATIC = 35,                    /* STATIC  */
  YYSYMBOL_AUTO = 36,                      /* AUTO  */
  YYSYMBOL_REGISTER = 37,                  /* REGISTER  */
  YYSYMBOL_INLINE = 38,                    /* INLINE  */
  YYSYMBOL_CONST = 39,                     /* CONST  */
  YYSYMBOL_RESTRICT = 40,                  /* RESTRICT  */
  YYSYMBOL_VOLATILE = 41,                  /* VOLATILE  */
  YYSYMBOL_BOOL = 42,                      /* BOOL  */
  YYSYMBOL_CHAR = 43,                      /* CHAR  */
  YYSYMBOL_SHORT = 44,                     /* SHORT  */
  YYSYMBOL_INT = 45,                       /* INT  */
  YYSYMBOL_LONG = 46,                      /* LONG  */
  YYSYMBOL_SIGNED = 47,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 48,                  /* UNSIGNED  */
  YYSYMBOL_FP = 49,                        /* FP  */
  YYSYMBOL_DOUBLE = 50,                    /* DOUBLE  */
  YYSYMBOL_VOID = 51,                      /* VOID  */
  YYSYMBOL_COMPLEX = 52,                   /* COMPLEX  */
  YYSYMBOL_IMAGINARY = 53,                 /* IMAGINARY  */
  YYSYMBOL_STRUCT = 54,                    /* STRUCT  */
  YYSYMBOL_UNION = 55,                     /* UNION  */
  YYSYMBOL_ENUM = 56,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 57,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 58,                      /* CASE  */
  YYSYMBOL_DEFAULT = 59,                   /* DEFAULT  */
  YYSYMBOL_IF = 60,                        /* IF  */
  YYSYMBOL_ELSE = 61,                      /* ELSE  */
  YYSYMBOL_SWITCH = 62,                    /* SWITCH  */
  YYSYMBOL_WHILE = 63,                     /* WHILE  */
  YYSYMBOL_DO = 64,                        /* DO  */
  YYSYMBOL_FOR = 65,                       /* FOR  */
  YYSYMBOL_GOTO = 66,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 67,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 68,                     /* BREAK  */
  YYSYMBOL_RETURN = 69,                    /* RETURN  */
  YYSYMBOL_ALIGNAS = 70,                   /* ALIGNAS  */
  YYSYMBOL_ALIGNOF = 71,                   /* ALIGNOF  */
  YYSYMBOL_ATOMIC = 72,                    /* ATOMIC  */
  YYSYMBOL_GENERIC = 73,                   /* GENERIC  */
  YYSYMBOL_NORETURN = 74,                  /* NORETURN  */
  YYSYMBOL_STATIC_ASSERT = 75,             /* STATIC_ASSERT  */
  YYSYMBOL_THREAD_LOCAL = 76,              /* THREAD_LOCAL  */
  YYSYMBOL_TEXT = 77,                      /* TEXT  */
  YYSYMBOL_TENSOR = 78,                    /* TENSOR  */
  YYSYMBOL_ITEM = 79,                      /* ITEM  */
  YYSYMBOL_AXIS = 80,                      /* AXIS  */
  YYSYMBOL_IN = 81,                        /* IN  */
  YYSYMBOL_DOT_ADD = 82,                   /* DOT_ADD  */
  YYSYMBOL_DOT_SUB = 83,                   /* DOT_SUB  */
  YYSYMBOL_DOT_MUL = 84,                   /* DOT_MUL  */
  YYSYMBOL_DOT_DIV = 85,                   /* DOT_DIV  */
  YYSYMBOL_AT = 86,                        /* AT  */
  YYSYMBOL_AT_MUL = 87,                    /* AT_MUL  */
  YYSYMBOL_BACKTICK = 88,                  /* BACKTICK  */
  YYSYMBOL_89_ = 89,                       /* '('  */
  YYSYMBOL_90_ = 90,                       /* ')'  */
  YYSYMBOL_91_ = 91,                       /* ','  */
  YYSYMBOL_92_ = 92,                       /* ':'  */
  YYSYMBOL_93_ = 93,                       /* '['  */
  YYSYMBOL_94_ = 94,                       /* ']'  */
  YYSYMBOL_95_ = 95,                       /* '.'  */
  YYSYMBOL_96_ = 96,                       /* '{'  */
  YYSYMBOL_97_ = 97,                       /* '}'  */
  YYSYMBOL_98_ = 98,                       /* '&'  */
  YYSYMBOL_99_ = 99,                       /* '*'  */
  YYSYMBOL_100_ = 100,                     /* '+'  */
  YYSYMBOL_101_ = 101,                     /* '-'  */
  YYSYMBOL_102_ = 102,                     /* '~'  */
  YYSYMBOL_103_ = 103,                     /* '!'  */
  YYSYMBOL_104_ = 104,                     /* '/'  */
  YYSYMBOL_105_ = 105,                     /* '%'  */
  YYSYMBOL_106_ = 106,                     /* '<'  */
  YYSYMBOL_107_ = 107,                     /* '>'  */
  YYSYMBOL_108_ = 108,                     /* '^'  */
  YYSYMBOL_109_ = 109,                     /* '|'  */
  YYSYMBOL_110_ = 110,                     /* '='  */
  YYSYMBOL_111_ = 111,                     /* ';'  */
  YYSYMBOL_YYACCEPT = 112,                 /* $accept  */
  YYSYMBOL_primary_expression = 113,       /* primary_expression  */
  YYSYMBOL_constant = 114,                 /* constant  */
  YYSYMBOL_enumeration_constant = 115,     /* enumeration_constant  */
  YYSYMBOL_string = 116,                   /* string  */
  YYSYMBOL_generic_selection = 117,        /* generic_selection  */
  YYSYMBOL_generic_assoc_list = 118,       /* generic_assoc_list  */
  YYSYMBOL_generic_association = 119,      /* generic_association  */
  YYSYMBOL_slice_item = 120,               /* slice_item  */
  YYSYMBOL_slice_expression = 121,         /* slice_expression  */
  YYSYMBOL_postfix_expression = 122,       /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 123, /* argument_expression_list  */
  YYSYMBOL_unary_expression = 124,         /* unary_expression  */
  YYSYMBOL_unary_operator = 125,           /* unary_operator  */
  YYSYMBOL_cast_expression = 126,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 127, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 128,      /* additive_expression  */
  YYSYMBOL_shift_expression = 129,         /* shift_expression  */
  YYSYMBOL_relational_expression = 130,    /* relational_expression  */
  YYSYMBOL_equality_expression = 131,      /* equality_expression  */
  YYSYMBOL_and_expression = 132,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 133,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 134,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 135,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 136,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 137,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 138,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 139,      /* assignment_operator  */
  YYSYMBOL_expression = 140,               /* expression  */
  YYSYMBOL_constant_expression = 141,      /* constant_expression  */
  YYSYMBOL_declaration = 142,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 143,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 144,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 145,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 146,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 147,           /* type_specifier  */
  YYSYMBOL_tensor_type = 148,              /* tensor_type  */
  YYSYMBOL_tensor_params = 149,            /* tensor_params  */
  YYSYMBOL_loop_label = 150,               /* loop_label  */
  YYSYMBOL_struct_or_union_specifier = 151, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 152,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 153,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 154,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 155, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 156,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 157,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 158,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 159,          /* enumerator_list  */
  YYSYMBOL_enumerator = 160,               /* enumerator  */
  YYSYMBOL_atomic_type_specifier = 161,    /* atomic_type_specifier  */
  YYSYMBOL_type_qualifier = 162,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 163,       /* function_specifier  */
  YYSYMBOL_alignment_specifier = 164,      /* alignment_specifier  */
  YYSYMBOL_declarator = 165,               /* declarator  */
  YYSYMBOL_166_1 = 166,                    /* $@1  */
  YYSYMBOL_direct_declarator = 167,        /* direct_declarator  */
  YYSYMBOL_pointer = 168,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 169,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 170,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 171,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 172,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 173,          /* identifier_list  */
  YYSYMBOL_type_name = 174,                /* type_name  */
  YYSYMBOL_abstract_declarator = 175,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 176, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 177,              /* initializer  */
  YYSYMBOL_initializer_list = 178,         /* initializer_list  */
  YYSYMBOL_designation = 179,              /* designation  */
  YYSYMBOL_designator_list = 180,          /* designator_list  */
  YYSYMBOL_designator = 181,               /* designator  */
  YYSYMBOL_static_assert_declaration = 182, /* static_assert_declaration  */
  YYSYMBOL_statement = 183,                /* statement  */
  YYSYMBOL_labeled_statement = 184,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 185,       /* compound_statement  */
  YYSYMBOL_block_item_list = 186,          /* block_item_list  */
  YYSYMBOL_block_item = 187,               /* block_item  */
  YYSYMBOL_expression_statement = 188,     /* expression_statement  */
  YYSYMBOL_selection_statement = 189,      /* selection_statement  */
  YYSYMBOL_190_2 = 190,                    /* $@2  */
  YYSYMBOL_loop_statement = 191,           /* loop_statement  */
  YYSYMBOL_iteration_statement = 192,      /* iteration_statement  */
  YYSYMBOL_axis_clause = 193,              /* axis_clause  */
  YYSYMBOL_axis_list = 194,                /* axis_list  */
  YYSYMBOL_dimension_list = 195,           /* dimension_list  */
  YYSYMBOL_jump_statement = 196,           /* jump_statement  */
  YYSYMBOL_translation_unit = 197,         /* translation_unit  */
  YYSYMBOL_external_declaration = 198,     /* external_declaration  */
  YYSYMBOL_function_definition = 199,      /* function_definition  */
  YYSYMBOL_declaration_list = 200          /* declaration_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  71
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2593

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  112
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  89
/* YYNRULES -- Number of rules.  */
#define YYNRULES  306
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  534

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   343


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   103,     2,     2,     2,   105,    98,     2,
      89,    90,    99,   100,    91,   101,    95,   104,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    92,   111,
     106,   110,   107,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    93,     2,    94,   108,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    96,   109,    97,   102,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    73,    73,    74,    75,    76,    77,    81,    82,    83,
      87,    91,    92,    96,   100,   101,   105,   106,   110,   111,
     115,   116,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   133,   134,   138,   139,   140,   141,   142,   143,
     144,   148,   149,   150,   151,   152,   153,   157,   158,   162,
     163,   164,   165,   166,   167,   168,   169,   173,   174,   175,
     176,   177,   181,   182,   183,   187,   188,   189,   190,   191,
     192,   196,   197,   198,   202,   203,   207,   208,   212,   213,
     217,   218,   222,   223,   227,   231,   232,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   250,   251,
     255,   259,   260,   261,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   278,   279,   283,   284,   288,   289,
     290,   291,   292,   293,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   318,   322,   326,   330,   331,   332,   336,   337,
     341,   342,   346,   347,   348,   352,   353,   354,   355,   359,
     360,   364,   365,   366,   367,   371,   372,   373,   374,   375,
     379,   380,   384,   385,   389,   393,   394,   395,   396,   400,
     401,   405,   406,   410,   410,   411,   415,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,   428,
     432,   433,   434,   435,   439,   440,   445,   446,   450,   451,
     452,   456,   457,   458,   462,   463,   467,   468,   472,   473,
     474,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   502,   503,   504,   508,   509,   510,   511,   515,
     519,   520,   524,   525,   529,   533,   534,   535,   536,   537,
     538,   542,   543,   544,   548,   549,   553,   554,   558,   559,
     563,   564,   569,   568,   579,   583,   587,   588,   589,   590,
     591,   592,   593,   596,   597,   601,   602,   606,   607,   612,
     613,   617,   618,   619,   620,   621,   622,   623,   627,   628,
     629,   633,   634,   638,   639,   643,   644
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "I_CONSTANT", "F_CONSTANT", "STRING_LITERAL", "FUNC_NAME", "SIZEOF",
  "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP",
  "EQ_OP", "NE_OP", "TH_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPEDEF_NAME",
  "ENUMERATION_CONSTANT", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "INLINE", "CONST", "RESTRICT", "VOLATILE", "BOOL", "CHAR",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FP", "DOUBLE", "VOID",
  "COMPLEX", "IMAGINARY", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "ALIGNAS", "ALIGNOF", "ATOMIC", "GENERIC",
  "NORETURN", "STATIC_ASSERT", "THREAD_LOCAL", "TEXT", "TENSOR", "ITEM",
  "AXIS", "IN", "DOT_ADD", "DOT_SUB", "DOT_MUL", "DOT_DIV", "AT", "AT_MUL",
  "BACKTICK", "'('", "')'", "','", "':'", "'['", "']'", "'.'", "'{'",
  "'}'", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'",
  "'>'", "'^'", "'|'", "'='", "';'", "$accept", "primary_expression",
  "constant", "enumeration_constant", "string", "generic_selection",
  "generic_assoc_list", "generic_association", "slice_item",
  "slice_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "tensor_type",
  "tensor_params", "loop_label", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "atomic_type_specifier", "type_qualifier", "function_specifier",
  "alignment_specifier", "declarator", "$@1", "direct_declarator",
  "pointer", "type_qualifier_list", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "type_name", "abstract_declarator", "direct_abstract_declarator",
  "initializer", "initializer_list", "designation", "designator_list",
  "designator", "static_assert_declaration", "statement",
  "labeled_statement", "compound_statement", "block_item_list",
  "block_item", "expression_statement", "selection_statement", "$@2",
  "loop_statement", "iteration_statement", "axis_clause", "axis_list",
  "dimension_list", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-407)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-211)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2299,  -407,  -407,  -407,  -407,  -407,  -407,  -407,  -407,  -407,
    -407,  -407,  -407,  -407,  -407,  -407,  -407,  -407,  -407,  -407,
    -407,  -407,  -407,  -407,  -407,    10,   -39,   -11,  -407,    -6,
    -407,  -407,   -64,  -407,    15,  2395,  2395,  -407,  -407,    17,
    -407,  -407,  2395,  2395,  2395,  -407,  1963,  -407,  -407,   -52,
     100,   961,  2515,  1624,   858,  -407,    42,    16,  -407,   -53,
    -407,  1883,    97,  -407,  -407,  -407,    -2,  2435,  -407,  -407,
    -407,  -407,  -407,   100,  -407,    51,   -10,  -407,  -407,  -407,
    -407,  -407,  -407,  1639,  1682,  1682,  -407,    88,   108,   961,
    -407,  -407,  -407,  -407,  -407,  -407,  -407,  -407,  -407,  -407,
     183,  -407,  1624,  -407,   133,   -29,   175,   154,   232,   109,
     104,   105,   203,   204,  -407,   136,  2515,   106,  2515,   144,
     149,   150,   -11,   160,   146,   165,  -407,  -407,  -407,    16,
      42,  -407,   498,  1416,  -407,    15,  -407,  2177,  1825,   421,
      33,  2435,  2072,  -407,    29,  -407,   112,  1624,    30,  -407,
     961,  -407,   961,  -407,  -407,  2515,  1624,   378,  -407,  -407,
     189,   185,   262,  -407,  -407,  1449,  1464,   279,  -407,  1624,
    1624,  1624,  1624,  1624,  1624,  1624,  1624,  1624,  1624,  1624,
    1624,  1624,  1624,  1624,  1624,  1624,  1624,  1624,  1624,  1624,
    1624,  1624,  1624,  1624,  -407,  -407,  2011,  1016,   132,  -407,
     147,  -407,  -407,  -407,   284,   303,  -407,  -407,  -407,  -407,
    -407,   201,   234,  1624,   235,   229,   239,   241,   779,    34,
     321,    24,    28,   851,   330,  -407,  -407,   -31,  -407,   199,
    -407,  -407,  -407,   623,  -407,  -407,  -407,  -407,  -407,  -407,
    1344,  -407,  -407,  -407,  -407,  -407,  -407,    31,   245,   246,
    -407,   195,  1238,  -407,   242,   247,  1062,    97,  2112,  -407,
    -407,  1624,  -407,    54,  -407,    79,    40,  -407,  -407,  -407,
    -407,   249,   250,   253,   255,  -407,  -407,  -407,  -407,  -407,
    -407,  -407,  -407,  -407,  -407,  -407,  1624,  -407,  1624,  1522,
    -407,  -407,   197,  -407,  -407,  -407,    84,  -407,  -407,  -407,
    -407,  -407,  -407,  -407,  -407,  -407,   133,   133,   133,   133,
     -29,   -29,   175,   175,   175,   175,   175,   154,   154,   232,
     109,   104,   105,   203,  -407,   254,   258,  1238,  -407,   256,
     257,  1118,   147,  2241,  1137,   263,  -407,   261,   779,   265,
     779,  1624,  1624,  1624,   292,   278,   725,   264,   270,  -407,
     271,  -407,  -407,    69,   268,  -407,  -407,  -407,  -407,  1624,
     364,  -407,   119,  1416,    86,  -407,  1755,  -407,    81,  -407,
    -407,  2347,  -407,   365,   275,  1238,  -407,  -407,  1624,  -407,
     280,   290,  -407,  -407,    74,  -407,  1624,  1416,  -407,   276,
     276,  -407,  2475,  -407,  -407,  1344,  -407,  -407,  1624,  1464,
    -407,  -407,  -407,   291,  1238,  -407,  -407,  1624,  -407,   297,
    -407,   283,  1238,  -407,   299,   304,  1193,   286,   405,  -407,
     779,  -407,   202,   206,   208,   322,   407,   888,   888,  -407,
    -407,  -407,  -407,  -407,   318,  -407,  1294,  -407,  -407,  -407,
    -407,   323,  -407,  -407,  -407,   319,   324,  -407,  -407,  -407,
    -407,  -407,   325,   211,  -407,   328,   138,  -407,  -407,  -407,
     329,   336,  -407,  -407,   339,  1238,  -407,  -407,  1624,  -407,
     340,  -407,  -407,  -407,   779,   779,   779,  1624,   342,  1565,
    1580,  -407,  -407,  -407,  1416,  -407,  -407,  1624,  -407,  2475,
    1624,  1311,  -407,  -407,  -407,  -407,   346,   348,  -407,   355,
    -407,  -407,   215,   347,   349,   779,   219,   779,   223,  -407,
    -407,  -407,  -407,  -407,  -407,  -407,  -407,   333,   443,  -407,
    -407,   779,  -407,   779,   779,  -407,  -407,   226,  -407,  -407,
    -407,  -407,   444,  -407
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     298,   141,   118,   119,   120,   122,   123,   179,   175,   176,
     177,   135,   125,   126,   127,   128,   131,   132,   129,   130,
     124,   136,   137,   148,   149,     0,     0,   178,   180,     0,
     121,   133,     0,   302,     0,   105,   107,   134,   139,     0,
     140,   138,   109,   111,   113,   103,     0,   299,   301,   169,
       0,     0,     0,     0,     0,   186,     0,   203,   101,     0,
     114,   117,   185,   183,   104,   106,   147,     0,   108,   110,
     112,     1,   300,     0,    10,   173,     0,   170,     2,     7,
       8,    11,    12,     0,     0,     0,     9,     0,     0,     0,
      41,    42,    43,    44,    45,    46,    22,     3,     4,     6,
      34,    47,     0,    49,    57,    62,    65,    71,    74,    76,
      78,    80,    82,    84,   100,     0,   156,   217,   158,     0,
       0,     0,     0,     0,     0,     0,   178,   204,   202,   201,
       0,   102,     0,     0,   305,     0,   304,     0,     0,     0,
       0,     0,     0,   150,     0,   154,     0,     0,     0,   165,
       0,    38,     0,    35,    36,     0,     0,    47,    85,    98,
       0,     0,     0,    28,    29,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   182,   155,     0,     0,   219,   216,
     220,   157,   181,   174,     0,     0,   142,   187,   205,   200,
     115,   117,     2,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   264,   270,     0,   268,     0,
     269,   255,   256,     0,   266,   257,   258,   283,   259,   260,
       0,   244,   116,   306,   303,   214,   198,   213,     0,   207,
     208,     0,     0,   188,    42,     0,     0,   184,     0,   145,
     151,     0,   152,     0,   159,   164,     0,   167,   172,   166,
     171,     0,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    87,     0,     5,     0,     0,
      27,    24,     0,    32,    19,    20,     0,    18,    26,    53,
      54,    55,    56,    50,    51,    52,    60,    61,    58,    59,
      63,    64,    68,    69,    70,    66,    67,    72,    73,    75,
      77,    79,    81,    83,   238,     0,     0,     0,   222,    42,
       0,     0,   218,     0,     0,     0,   289,   143,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   292,
       0,   294,   296,     0,     0,   271,   284,   265,   267,     0,
       0,   246,     0,     0,     0,   250,     0,   211,   219,   212,
     197,     0,   199,     0,     0,     0,   189,   196,     0,   195,
      42,     0,   146,   161,     0,   153,     0,     0,   168,    39,
       0,    40,     0,    86,    99,     0,    48,    25,     0,     0,
      23,   239,   221,     0,     0,   223,   229,     0,   228,     0,
     240,     0,     0,   230,    42,     0,     0,     0,     0,   261,
       0,   263,     0,     0,     0,     0,     0,     0,     0,   291,
     293,   295,   297,   144,     0,   253,     0,   242,   245,   249,
     251,   206,   209,   215,   191,     0,     0,   192,   194,   160,
     162,   163,     0,     0,    14,     0,     0,    33,    21,   225,
       0,     0,   227,   241,     0,     0,   231,   237,     0,   236,
       0,   254,   290,   262,     0,     0,     0,     0,   285,     0,
       0,   252,   243,   248,     0,   190,   193,     0,    13,     0,
       0,     0,    30,   224,   226,   233,     0,     0,   234,   274,
     275,   276,     0,     0,     0,     0,     0,     0,     0,   247,
      17,    15,    16,    31,   232,   235,   272,     0,     0,   282,
     280,     0,   278,     0,     0,   277,   287,     0,   281,   279,
     273,   286,     0,   288
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -407,  -407,  -407,  -407,  -407,  -407,  -407,   -40,    52,  -407,
    -407,  -407,   294,  -407,   -16,    91,   140,    61,   135,   266,
     260,   267,   298,   259,  -407,   -30,  -104,  -407,   -85,   -28,
     -42,     5,  -407,   327,  -407,   -43,  -407,  -407,  -407,  -407,
    -407,   313,  -116,    -8,  -407,    75,  -407,   416,  -120,  -407,
     -50,  -407,  -407,   -19,  -407,   351,   -47,  -123,  -135,  -407,
     124,  -407,    12,  -103,  -192,  -121,   101,  -406,  -407,   134,
     -45,   -86,  -407,   -61,  -407,   281,  -277,  -407,  -407,   282,
    -407,  -407,  -407,  -407,  -407,  -407,   451,  -407,  -407
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    96,    97,    75,    98,    99,   453,   454,   295,   296,
     100,   292,   157,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   158,   159,   286,   227,   115,
      33,   135,    59,    60,    35,    36,    37,   124,   229,    38,
      39,   142,   143,   117,   263,   264,    40,    76,    77,    41,
      42,    43,    44,   125,   140,    62,    63,   129,   325,   249,
     250,   251,   455,   326,   200,   361,   362,   363,   364,   365,
      45,   230,   231,   232,   233,   234,   235,   236,   524,   237,
     238,   504,   527,   337,   239,    46,    47,    48,   137
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     136,   118,   118,   248,   160,    34,   332,   127,   116,   116,
     128,   123,   242,    49,   199,    61,   256,   118,    55,   134,
      66,   114,   145,   114,   116,   121,   260,   348,   270,   241,
     484,   350,    55,    74,    55,   255,    55,   345,   130,   118,
      64,    65,    54,    74,    73,    55,   116,    68,    69,    70,
      51,    34,   274,   176,   177,     8,     9,    10,   131,   144,
     288,   293,   297,   119,   120,   160,   118,   160,   118,   428,
     198,   178,   179,   116,   331,   116,   244,    55,    52,   208,
     355,   148,   209,    53,  -183,   484,   168,   149,   126,   127,
     228,   118,   118,   330,   141,   243,   145,   145,   116,   116,
     118,   161,   118,    74,    56,   118,    50,   116,   195,   116,
     201,   211,   116,    67,    57,    57,   211,   114,    56,   268,
     366,   261,    56,   346,   197,   265,    58,   269,    57,   375,
      57,    56,   344,   144,   144,   349,   241,   388,   353,   351,
     262,    57,   260,   247,   369,   384,   270,   127,   374,   198,
     479,   480,   381,   299,   300,   301,   302,   303,   304,   305,
     288,   147,   271,    56,   272,   385,   261,   273,   182,   183,
     196,   386,   184,    57,   197,   399,   332,   155,   400,   359,
     432,   360,   393,   114,   394,   339,   138,   180,   181,   387,
     139,   228,   162,   163,   164,   196,   439,   156,   411,   197,
     368,   247,   127,   266,   404,    57,   208,   189,   118,   267,
     436,   416,   190,   145,   191,   116,   437,   169,   170,   171,
     172,   196,   192,   403,   193,   197,   194,   409,   367,   491,
     415,   114,   173,   383,   202,   492,   333,   174,   175,   203,
     334,   204,   438,   312,   313,   314,   315,   316,   187,   188,
     144,   205,   419,   206,   421,   207,   422,   423,   424,   241,
     185,   186,   217,   218,   219,   290,   451,   306,   307,   308,
     309,   445,   165,   396,   446,   289,   166,   127,   167,   287,
     288,   208,   298,   241,   127,   372,   373,   397,   398,   465,
     335,   241,   474,   288,   457,   297,   475,   288,   476,   288,
     460,   488,   489,   461,   427,   517,   288,   336,   464,   521,
     288,   133,   470,   523,   288,   483,   531,   532,   341,   368,
     310,   311,   317,   318,   347,   208,   338,   340,   342,   114,
     343,   434,   241,   354,   473,   370,   376,   371,   247,   389,
     390,   377,   118,   391,   401,   101,   392,   101,   402,   116,
     405,   406,   418,   417,   208,   425,   114,   420,   450,   426,
     433,   496,   127,   509,   497,   265,   208,   435,   443,   444,
     483,   247,   395,   463,   447,   429,   247,   151,   153,   154,
     241,   430,   431,   510,   448,   459,   512,   241,   499,   500,
     501,   462,   502,   466,   506,   508,   101,   471,   467,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   472,
     478,   477,   481,   485,  -210,   208,   516,   487,   486,   520,
     490,   522,   503,   493,    78,    79,    80,    81,    82,    83,
     494,    84,    85,   495,   498,   528,   518,   529,   530,   118,
     514,   101,   515,   519,   525,   132,   116,   526,   533,   511,
     320,   458,   323,    86,   258,   319,   252,   210,   321,   449,
       8,     9,    10,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   285,   146,
     322,   257,    87,   126,    88,   442,   456,    72,   440,     0,
       0,   212,    79,    80,    81,    82,    83,   101,    84,    85,
      89,   356,     0,     0,   358,   253,     0,     0,     0,    90,
     254,    92,    93,    94,    95,     0,     0,     0,     0,     1,
      86,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,   101,   213,   214,   215,     0,
     216,   217,   218,   219,   220,   221,   222,   223,    26,    87,
      27,    88,    28,    29,    30,    31,    32,     0,     0,     0,
       0,     0,     0,   101,     0,     0,   224,    89,     0,     0,
       0,     0,     0,     0,   132,   225,    90,    91,    92,    93,
      94,    95,     0,     0,     0,     0,     0,     0,     0,   226,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   212,    79,    80,    81,
      82,    83,     0,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     1,    86,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
     101,   213,   214,   215,     0,   216,   217,   218,   219,   220,
     221,   222,   223,    26,    87,    27,    88,    28,    29,    30,
      31,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   224,    89,     0,     0,     0,     0,     0,     0,   132,
     357,    90,    91,    92,    93,    94,    95,     0,    78,    79,
      80,    81,    82,    83,   226,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,    86,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   212,    79,    80,    81,    82,    83,     0,    84,
      85,     0,     0,     0,     0,    26,    87,    27,    88,    28,
      29,    30,    31,    32,     0,     0,     0,     0,     0,     0,
       0,    86,     0,     0,    89,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,    92,    93,    94,    95,     0,
       0,     0,     0,     0,     0,     0,   226,   213,   214,   215,
       0,   216,   217,   218,   219,   220,   221,   222,   223,     0,
      87,     0,    88,     0,    78,    79,    80,    81,    82,    83,
       0,    84,    85,     0,     0,     0,     0,   224,    89,     0,
       0,     0,     0,     0,     0,   132,     0,    90,    91,    92,
      93,    94,    95,    86,     0,     0,     0,     0,     0,     1,
     226,    78,    79,    80,    81,    82,    83,     0,    84,    85,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
      86,     0,    87,     0,    88,     0,     0,     0,     0,     0,
     122,     0,     0,     0,     0,    31,    32,     0,     0,     0,
      89,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      91,    92,    93,    94,    95,     0,     0,     0,     0,    87,
       0,    88,   352,     0,    78,    79,    80,    81,    82,    83,
       0,    84,    85,     0,     0,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,    92,    93,
      94,    95,     1,    86,     0,     0,     0,     0,     0,   226,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    78,
      79,    80,    81,    82,    83,     0,    84,    85,     0,     0,
       0,     0,    87,    27,    88,     0,     0,     0,    31,    32,
       0,     0,     0,     0,     0,     0,     0,     0,    86,     0,
      89,   327,     0,     0,     0,     8,     9,    10,     0,    90,
      91,    92,    93,    94,    95,    78,    79,    80,    81,    82,
      83,     0,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,   126,    88,
       0,     0,     0,     0,    86,     0,     0,   378,     0,     0,
       0,     8,     9,    10,     0,    89,     0,     0,     0,     0,
     328,     0,     0,     0,    90,   329,    92,    93,    94,    95,
       0,    78,    79,    80,    81,    82,    83,     0,    84,    85,
       0,     0,     0,    87,   126,    88,     0,     0,     0,     0,
      78,    79,    80,    81,    82,    83,     0,    84,    85,     0,
      86,    89,     0,   407,     0,     0,   379,     8,     9,    10,
      90,   380,    92,    93,    94,    95,     0,     0,     0,    86,
       0,     0,   412,     0,     0,     0,     8,     9,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
     126,    88,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,     0,    84,    85,     0,     0,    89,    87,   126,
      88,     0,   408,     0,     0,     0,    90,    91,    92,    93,
      94,    95,     0,     0,     0,    86,    89,     0,   468,     0,
       0,   413,     8,     9,    10,    90,   414,    92,    93,    94,
      95,    78,    79,    80,    81,    82,    83,     0,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    87,   126,    88,     0,     0,     0,
      86,     0,     0,     0,     0,     0,     0,     8,     9,    10,
       0,     0,    89,     0,     0,     0,     0,   469,     0,     0,
       0,    90,    91,    92,    93,    94,    95,    78,    79,    80,
      81,    82,    83,     0,    84,    85,     0,     0,     0,    87,
     126,    88,     0,     0,    78,    79,    80,    81,    82,    83,
       0,    84,    85,     0,     0,     0,    86,    89,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,    92,    93,
      94,    95,     0,    86,     0,     0,     0,    78,    79,    80,
      81,    82,    83,     0,    84,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,    88,     0,     0,
       0,     0,     0,     0,     0,     0,    86,     0,     0,     0,
       0,     0,    87,    89,    88,     0,     0,   359,     0,   360,
     240,   482,    90,    91,    92,    93,    94,    95,     0,     0,
      89,     0,     0,     0,   359,     0,   360,   240,   513,    90,
      91,    92,    93,    94,    95,    87,     0,    88,     0,    78,
      79,    80,    81,    82,    83,     0,    84,    85,     0,     0,
       0,     0,     0,    89,     0,     0,     0,   359,     0,   360,
     240,     0,    90,    91,    92,    93,    94,    95,    86,     0,
       0,     0,    78,    79,    80,    81,    82,    83,     0,    84,
      85,     0,     0,     0,     0,     0,     0,    78,    79,    80,
      81,    82,    83,     0,    84,    85,     0,     0,     0,     0,
       0,    86,     0,     0,     0,     0,     0,    87,     0,    88,
       0,     0,     0,     0,     0,     0,    86,     0,     0,     0,
       0,     0,     0,     0,     0,    89,     0,     0,     0,     0,
       0,     0,   240,     0,    90,    91,    92,    93,    94,    95,
      87,     0,    88,     0,     0,    78,    79,    80,    81,    82,
      83,     0,    84,    85,     0,    87,     0,    88,    89,   291,
       0,     0,     0,     0,     0,     0,     0,    90,    91,    92,
      93,    94,    95,    89,    86,     0,   294,     0,     0,     0,
       0,     0,    90,    91,    92,    93,    94,    95,    78,    79,
      80,    81,    82,    83,     0,    84,    85,     0,     0,     0,
       0,     0,     0,    78,    79,    80,    81,    82,    83,     0,
      84,    85,     0,    87,     0,    88,     0,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    89,    86,     0,     0,     0,     0,     0,   395,     0,
      90,    91,    92,    93,    94,    95,     0,    78,    79,    80,
      81,    82,    83,     0,    84,    85,    87,     0,    88,     0,
       0,     0,    78,    79,    80,    81,    82,    83,     0,    84,
      85,    87,     0,    88,    89,   505,    86,     0,     0,     0,
       0,     0,     0,    90,    91,    92,    93,    94,    95,    89,
     507,    86,     0,     0,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,     0,    78,    79,    80,    81,    82,
      83,     0,    84,    85,     0,    87,     0,    88,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      87,     0,    88,    89,    86,     0,     0,     0,     0,     0,
       0,     0,    90,    91,    92,    93,    94,    95,   150,     0,
       0,     0,     0,     0,     0,     0,     0,    90,    91,    92,
      93,    94,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,    88,     0,     0,    55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   152,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,    92,    93,    94,    95,     1,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    27,   245,    28,
       0,    30,    31,    32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   366,   324,     0,     0,   197,     0,
       0,     0,     0,     0,    57,     0,     1,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    27,     0,    28,
       0,    30,    31,    32,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,   246,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,    27,     0,    28,    29,    30,
      31,    32,     0,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   132,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   133,     1,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,    27,     0,    28,    29,    30,
      31,    32,     1,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,    28,     0,    30,    31,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     196,   324,     0,     1,   197,     0,     0,     0,     0,     0,
      57,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,    27,     0,     0,    29,     0,    31,
      32,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   259,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,     0,    29,     0,    31,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,   382,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,    28,    29,    30,    31,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,   132,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    27,     0,    28,     0,    30,    31,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   410,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,    27,     0,    28,    29,    30,    31,    32,     1,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   441,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    27,
       0,    28,     0,    30,    31,    32,     1,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     1,    27,     0,    28,
       0,    30,    31,    32,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,    27,     0,     0,
      29,     0,    31,    32,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,   452,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,    27,     0,     0,
       0,     0,    31,    32,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,     0,
       0,     0,    31,    32
};

static const yytype_int16 yycheck[] =
{
      61,    51,    52,   138,    89,     0,   198,    57,    51,    52,
      57,    54,   133,     3,   117,    34,   139,    67,     3,    61,
       3,    51,    67,    53,    67,    53,   142,     3,   148,   133,
     436,     3,     3,     3,     3,   139,     3,     3,    91,    89,
      35,    36,   106,     3,    96,     3,    89,    42,    43,    44,
      89,    46,   156,    82,    83,    39,    40,    41,   111,    67,
      91,   165,   166,    51,    52,   150,   116,   152,   118,   346,
     117,   100,   101,   116,   197,   118,   137,     3,    89,   129,
     111,    91,   129,    89,     3,   491,   102,    97,    72,   139,
     132,   141,   142,   197,    96,   137,   141,   142,   141,   142,
     150,    89,   152,     3,    89,   155,    96,   150,   116,   152,
     118,   130,   155,    96,    99,    99,   135,   147,    89,   147,
      89,    92,    89,    89,    93,   144,   111,    97,    99,   252,
      99,    89,   218,   141,   142,   111,   240,    97,   223,   111,
     111,    99,   258,   138,   247,    91,   266,   197,   252,   196,
     427,   428,   256,   169,   170,   171,   172,   173,   174,   175,
      91,   110,   150,    89,   152,   111,    92,   155,    14,    15,
      89,    92,    18,    99,    93,    91,   368,    89,    94,    93,
     111,    95,   286,   213,   288,   213,    89,    12,    13,   110,
      93,   233,     9,    10,    11,    89,   110,    89,   333,    93,
     247,   196,   252,    91,   327,    99,   256,    98,   258,    97,
      91,   334,   108,   258,   109,   258,    97,    84,    85,    86,
      87,    89,    19,   327,    20,    93,    90,   331,   247,    91,
     334,   261,    99,   261,    90,    97,    89,   104,   105,    90,
      93,    91,   363,   182,   183,   184,   185,   186,    16,    17,
     258,    91,   338,   107,   340,    90,   341,   342,   343,   363,
     106,   107,    63,    64,    65,     3,   387,   176,   177,   178,
     179,   375,    89,   289,   378,    90,    93,   327,    95,    90,
      91,   331,     3,   387,   334,    90,    91,    90,    91,   412,
       6,   395,    90,    91,   398,   399,    90,    91,    90,    91,
     404,    90,    91,   407,   346,    90,    91,     4,   412,    90,
      91,   110,   416,    90,    91,   436,    90,    91,    89,   366,
     180,   181,   187,   188,     3,   375,    92,    92,    89,   359,
      89,   359,   436,     3,   420,    90,    94,    91,   333,    90,
      90,    94,   392,    90,    90,    51,    91,    53,    90,   392,
      94,    94,    91,    90,   404,    63,   386,    92,   386,    81,
      92,   465,   412,   484,   468,   384,   416,     3,     3,    94,
     491,   366,    96,    90,    94,   111,   371,    83,    84,    85,
     484,   111,   111,   487,    94,    94,   490,   491,   474,   475,
     476,    94,   477,    94,   479,   480,   102,   111,    94,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     4,
       3,    89,    94,    94,    91,   465,    61,    92,    94,   505,
      92,   507,    80,    94,     3,     4,     5,     6,     7,     8,
      94,    10,    11,    94,    94,   521,    89,   523,   524,   489,
      94,   147,    94,   504,   111,    96,   489,     4,     4,   489,
     190,   399,   193,    32,   141,   189,    35,   130,   191,   384,
      39,    40,    41,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   110,    73,
     192,   140,    71,    72,    73,   371,   395,    46,   364,    -1,
      -1,     3,     4,     5,     6,     7,     8,   213,    10,    11,
      89,   229,    -1,    -1,   233,    94,    -1,    -1,    -1,    98,
      99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,   261,    58,    59,    60,    -1,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,   289,    -1,    -1,    88,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,   101,
     102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   359,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
     386,    58,    59,    60,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      97,    98,    99,   100,   101,   102,   103,    -1,     3,     4,
       5,     6,     7,     8,   111,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,    58,    59,    60,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    -1,
      71,    -1,    73,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    88,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    98,    99,   100,
     101,   102,   103,    32,    -1,    -1,    -1,    -1,    -1,    31,
     111,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    71,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    77,    78,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      99,   100,   101,   102,   103,    -1,    -1,    -1,    -1,    71,
      -1,    73,   111,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,   101,
     102,   103,    31,    32,    -1,    -1,    -1,    -1,    -1,   111,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    71,    72,    73,    -1,    -1,    -1,    77,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      89,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    98,
      99,   100,   101,   102,   103,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    -1,    -1,
      -1,    39,    40,    41,    -1,    89,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    71,    72,    73,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      32,    89,    -1,    35,    -1,    -1,    94,    39,    40,    41,
      98,    99,   100,   101,   102,   103,    -1,    -1,    -1,    32,
      -1,    -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      72,    73,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    89,    71,    72,
      73,    -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,
     102,   103,    -1,    -1,    -1,    32,    89,    -1,    35,    -1,
      -1,    94,    39,    40,    41,    98,    99,   100,   101,   102,
     103,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    73,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    94,    -1,    -1,
      -1,    98,    99,   100,   101,   102,   103,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    71,
      72,    73,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    32,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,   101,
     102,   103,    -1,    32,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    71,    89,    73,    -1,    -1,    93,    -1,    95,
      96,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
      89,    -1,    -1,    -1,    93,    -1,    95,    96,    97,    98,
      99,   100,   101,   102,   103,    71,    -1,    73,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    93,    -1,    95,
      96,    -1,    98,    99,   100,   101,   102,   103,    32,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    98,    99,   100,   101,   102,   103,
      71,    -1,    73,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    71,    -1,    73,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,    89,    32,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    98,    99,   100,   101,   102,   103,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    71,    -1,    73,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    32,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      98,    99,   100,   101,   102,   103,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    71,    -1,    73,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    71,    -1,    73,    89,    90,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,    89,
      90,    32,    -1,    -1,    -1,    -1,    -1,    -1,    98,    99,
     100,   101,   102,   103,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    71,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    73,    89,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    99,   100,   101,   102,   103,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    73,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,    31,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,     3,    74,
      -1,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    90,    -1,    -1,    93,    -1,
      -1,    -1,    -1,    -1,    99,    -1,    31,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,
      -1,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    90,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    74,    75,    76,
      77,    78,    -1,     0,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   110,    31,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    72,    -1,    74,    75,    76,
      77,    78,    31,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    74,    -1,    76,    77,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    90,    -1,    31,    93,    -1,    -1,    -1,    -1,    -1,
      99,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    72,    -1,    -1,    75,    -1,    77,
      78,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    75,    -1,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    97,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    96,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    72,    -1,    74,    -1,    76,    77,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    90,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    72,    -1,    74,    75,    76,    77,    78,    31,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,
      -1,    74,    -1,    76,    77,    78,    31,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    31,    72,    -1,    74,
      -1,    76,    77,    78,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    72,    -1,    -1,
      75,    -1,    77,    78,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    72,    -1,    -1,
      -1,    -1,    77,    78,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      -1,    -1,    77,    78
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    31,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    70,    72,    74,    75,
      76,    77,    78,   142,   143,   146,   147,   148,   151,   152,
     158,   161,   162,   163,   164,   182,   197,   198,   199,     3,
      96,    89,    89,    89,   106,     3,    89,    99,   111,   144,
     145,   165,   167,   168,   143,   143,     3,    96,   143,   143,
     143,     0,   198,    96,     3,   115,   159,   160,     3,     4,
       5,     6,     7,     8,    10,    11,    32,    71,    73,    89,
      98,    99,   100,   101,   102,   103,   113,   114,   116,   117,
     122,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   141,   147,   155,   162,   174,
     174,   141,    72,   147,   149,   165,    72,   162,   168,   169,
      91,   111,    96,   110,   142,   143,   185,   200,    89,    93,
     166,    96,   153,   154,   155,   182,   159,   110,    91,    97,
      89,   124,    89,   124,   124,    89,    89,   124,   137,   138,
     140,   174,     9,    10,    11,    89,    93,    95,   126,    84,
      85,    86,    87,    99,   104,   105,    82,    83,   100,   101,
      12,    13,    14,    15,    18,   106,   107,    16,    17,    98,
     108,   109,    19,    20,    90,   155,    89,    93,   168,   175,
     176,   155,    90,    90,    91,    91,   107,    90,   162,   168,
     145,   165,     3,    58,    59,    60,    62,    63,    64,    65,
      66,    67,    68,    69,    88,    97,   111,   140,   142,   150,
     183,   184,   185,   186,   187,   188,   189,   191,   192,   196,
      96,   138,   177,   142,   185,     3,    90,   143,   170,   171,
     172,   173,    35,    94,    99,   138,   169,   167,   153,    97,
     154,    92,   111,   156,   157,   165,    91,    97,   141,    97,
     160,   174,   174,   174,   138,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   110,   139,    90,    91,    90,
       3,    90,   123,   138,    92,   120,   121,   138,     3,   126,
     126,   126,   126,   126,   126,   126,   127,   127,   127,   127,
     128,   128,   129,   129,   129,   129,   129,   130,   130,   131,
     132,   133,   134,   135,    90,   170,   175,    35,    94,    99,
     138,   169,   176,    89,    93,     6,     4,   195,    92,   141,
      92,    89,    89,    89,   183,     3,    89,     3,     3,   111,
       3,   111,   111,   140,     3,   111,   191,    97,   187,    93,
      95,   177,   178,   179,   180,   181,    89,   165,   168,   175,
      90,    91,    90,    91,   138,   169,    94,    94,    35,    94,
      99,   138,    97,   141,    91,   111,    92,   110,    97,    90,
      90,    90,    91,   138,   138,    96,   126,    90,    91,    91,
      94,    90,    90,   138,   169,    94,    94,    35,    94,   138,
      90,   170,    35,    94,    99,   138,   169,    90,    91,   183,
      92,   183,   140,   140,   140,    63,    81,   142,   188,   111,
     111,   111,   111,    92,   141,     3,    91,    97,   177,   110,
     181,    57,   172,     3,    94,   138,   138,    94,    94,   157,
     141,   177,    59,   118,   119,   174,   178,   138,   120,    94,
     138,   138,    94,    90,   138,   169,    94,    94,    35,    94,
     138,   111,     4,   183,    90,    90,    90,    89,     3,   188,
     188,    94,    97,   177,   179,    94,    94,    92,    90,    91,
      92,    91,    97,    94,    94,    94,   138,   138,    94,   183,
     183,   183,   140,    80,   193,    90,   140,    90,   140,   177,
     138,   119,   138,    97,    94,    94,    61,    90,    89,   185,
     183,    90,   183,    90,   190,   111,     4,   194,   183,   183,
     183,    90,    91,     4
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   112,   113,   113,   113,   113,   113,   114,   114,   114,
     115,   116,   116,   117,   118,   118,   119,   119,   120,   120,
     121,   121,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   123,   123,   124,   124,   124,   124,   124,   124,
     124,   125,   125,   125,   125,   125,   125,   126,   126,   127,
     127,   127,   127,   127,   127,   127,   127,   128,   128,   128,
     128,   128,   129,   129,   129,   130,   130,   130,   130,   130,
     130,   131,   131,   131,   132,   132,   133,   133,   134,   134,
     135,   135,   136,   136,   137,   138,   138,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   140,   140,
     141,   142,   142,   142,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   144,   144,   145,   145,   146,   146,
     146,   146,   146,   146,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   148,   149,   150,   151,   151,   151,   152,   152,
     153,   153,   154,   154,   154,   155,   155,   155,   155,   156,
     156,   157,   157,   157,   157,   158,   158,   158,   158,   158,
     159,   159,   160,   160,   161,   162,   162,   162,   162,   163,
     163,   164,   164,   166,   165,   165,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     168,   168,   168,   168,   169,   169,   170,   170,   171,   171,
     171,   172,   172,   172,   173,   173,   174,   174,   175,   175,
     175,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   177,   177,   177,   178,   178,   178,   178,   179,
     180,   180,   181,   181,   182,   183,   183,   183,   183,   183,
     183,   184,   184,   184,   185,   185,   186,   186,   187,   187,
     188,   188,   190,   189,   189,   189,   191,   191,   191,   191,
     191,   191,   191,   192,   192,   193,   193,   194,   194,   195,
     195,   196,   196,   196,   196,   196,   196,   196,   197,   197,
     197,   198,   198,   199,   199,   200,   200
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     6,     1,     3,     3,     3,     1,     1,
       1,     3,     1,     4,     3,     4,     3,     3,     2,     2,
       6,     7,     1,     3,     1,     2,     2,     2,     2,     4,
       4,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     3,     4,     5,     2,     1,     1,
       1,     2,     2,     3,     1,     2,     1,     2,     1,     1,
       3,     2,     3,     3,     1,     4,     5,     5,     6,     2,
       1,     3,     3,     1,     4,     1,     1,     1,     1,     1,
       1,     4,     4,     0,     3,     1,     1,     3,     3,     4,
       6,     5,     5,     6,     5,     4,     4,     4,     3,     4,
       3,     2,     2,     1,     1,     2,     3,     1,     1,     3,
       3,     2,     2,     1,     1,     3,     2,     1,     2,     1,
       1,     3,     2,     3,     5,     4,     5,     4,     3,     3,
       3,     4,     6,     5,     5,     6,     4,     4,     2,     3,
       3,     4,     3,     4,     1,     2,     1,     4,     3,     2,
       1,     2,     3,     2,     7,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     2,     3,     1,     2,     1,     1,
       1,     2,     0,     8,     5,     5,     5,     7,     6,     7,
       6,     7,     6,     1,     2,     0,     4,     1,     3,     1,
       3,     3,     2,     3,     2,     3,     2,     3,     0,     1,
       2,     1,     1,     4,     3,     1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 7: /* constant: I_CONSTANT  */
#line 81 "yapl.y"
                     {int_consts++;}
#line 2241 "yapl.tab.c"
    break;

  case 8: /* constant: F_CONSTANT  */
#line 82 "yapl.y"
                     {float_consts++;}
#line 2247 "yapl.tab.c"
    break;

  case 11: /* string: STRING_LITERAL  */
#line 91 "yapl.y"
                         {string_literals++;}
#line 2253 "yapl.tab.c"
    break;

  case 18: /* slice_item: assignment_expression  */
#line 110 "yapl.y"
                                { (yyval.ival) = 0; }
#line 2259 "yapl.tab.c"
    break;

  case 19: /* slice_item: ':'  */
#line 111 "yapl.y"
              { (yyval.ival) = 1; }
#line 2265 "yapl.tab.c"
    break;

  case 20: /* slice_expression: slice_item  */
#line 115 "yapl.y"
                     { (yyval.ival) = (yyvsp[0].ival); }
#line 2271 "yapl.tab.c"
    break;

  case 21: /* slice_expression: slice_expression ',' slice_item  */
#line 116 "yapl.y"
                                          { (yyval.ival) = 1; }
#line 2277 "yapl.tab.c"
    break;

  case 23: /* postfix_expression: postfix_expression '[' slice_expression ']'  */
#line 121 "yapl.y"
                                                      { if ((yyvsp[-1].ival)) slice_expressions_count++; }
#line 2283 "yapl.tab.c"
    break;

  case 53: /* multiplicative_expression: multiplicative_expression DOT_MUL cast_expression  */
#line 166 "yapl.y"
                                                            {tensor_elementwise_ops++;}
#line 2289 "yapl.tab.c"
    break;

  case 54: /* multiplicative_expression: multiplicative_expression DOT_DIV cast_expression  */
#line 167 "yapl.y"
                                                            {tensor_elementwise_ops++;}
#line 2295 "yapl.tab.c"
    break;

  case 55: /* multiplicative_expression: multiplicative_expression AT cast_expression  */
#line 168 "yapl.y"
                                                       {tensor_contractions++;}
#line 2301 "yapl.tab.c"
    break;

  case 56: /* multiplicative_expression: multiplicative_expression AT_MUL cast_expression  */
#line 169 "yapl.y"
                                                           {tensor_products++;}
#line 2307 "yapl.tab.c"
    break;

  case 60: /* additive_expression: additive_expression DOT_ADD multiplicative_expression  */
#line 176 "yapl.y"
                                                                {tensor_elementwise_ops++;}
#line 2313 "yapl.tab.c"
    break;

  case 61: /* additive_expression: additive_expression DOT_SUB multiplicative_expression  */
#line 177 "yapl.y"
                                                                {tensor_elementwise_ops++;}
#line 2319 "yapl.tab.c"
    break;

  case 142: /* tensor_type: TENSOR '<' tensor_params '>'  */
#line 318 "yapl.y"
                                       {tensor_definitions++;}
#line 2325 "yapl.tab.c"
    break;

  case 144: /* loop_label: BACKTICK IDENTIFIER ':'  */
#line 326 "yapl.y"
                                   {loop_labels_count++;}
#line 2331 "yapl.tab.c"
    break;

  case 183: /* $@1: %empty  */
#line 410 "yapl.y"
                  {pointer_decls++;}
#line 2337 "yapl.tab.c"
    break;

  case 272: /* $@2: %empty  */
#line 569 "yapl.y"
      {
          ladder_len++;
      }
#line 2345 "yapl.tab.c"
    break;

  case 273: /* selection_statement: IF '(' expression ')' statement ELSE $@2 statement  */
#line 573 "yapl.y"
      {
          if (ladder_len >= max) {
              max = ladder_len;
          }
          ladder_len--;
      }
#line 2356 "yapl.tab.c"
    break;

  case 274: /* selection_statement: IF '(' expression ')' statement  */
#line 580 "yapl.y"
      {
          ifs_wo_else++;
      }
#line 2364 "yapl.tab.c"
    break;

  case 282: /* loop_statement: FOR IDENTIFIER IN IDENTIFIER axis_clause compound_statement  */
#line 593 "yapl.y"
                                                                      {tensor_loops++;}
#line 2370 "yapl.tab.c"
    break;

  case 293: /* jump_statement: CONTINUE IDENTIFIER ';'  */
#line 619 "yapl.y"
                                  {labeled_continues++;}
#line 2376 "yapl.tab.c"
    break;

  case 295: /* jump_statement: BREAK IDENTIFIER ';'  */
#line 621 "yapl.y"
                               {labeled_breaks++;}
#line 2382 "yapl.tab.c"
    break;

  case 299: /* translation_unit: external_declaration  */
#line 628 "yapl.y"
                               {global_declarations++;}
#line 2388 "yapl.tab.c"
    break;

  case 300: /* translation_unit: translation_unit external_declaration  */
#line 629 "yapl.y"
                                                {global_declarations++;}
#line 2394 "yapl.tab.c"
    break;

  case 301: /* external_declaration: function_definition  */
#line 633 "yapl.y"
                              {func_definitions++;}
#line 2400 "yapl.tab.c"
    break;


#line 2404 "yapl.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 647 "yapl.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char buff[2048];

int yylex(void);
int mode=-1;

void yyerror(const char *s)
{
	fflush(stdout);
	/*mode -1 for syntax error, mode 0 for lex error, mode 1 for user cli error, changes need to be made, mode -1 currently correct*/
	if(mode==-1)
		fprintf(stderr, "***parsing terminated*** [syntax error]\n error at line %d near '%s'\n", yylineno, yytext);
	else if(mode==0 || mode==1)
		fprintf(stderr, "%s\n syntax error at line %d near '%s'",s, yylineno, yytext);
		
	exit(-1);
}

int main(int argc, char **argv)
{
    extern FILE *yyin;

	if(argc<2)
	{
		sprintf(buff,"***process terminated*** [input error]: invalid number of command-line arguments");
		mode=1;
		yyerror(buff);
		exit(1);
	}

	yyin=fopen(argv[1],"r");

	if(yyin==NULL)
	{
		sprintf(buff,"***process terminated*** [input error]: no such file \"%s\" exists",argv[1]);
		mode=1;
		yyerror(buff);
		exit(1);
	}
	else
	{
		do
		{
			yyparse();
		}
		while(!feof(yyin));
	}

	printf("***parsing successful***\n");
	printf("#global_declarations = %d\n",global_declarations);
	printf("#function_definitions = %d\n",func_definitions);
	printf("#integer_constants = %d\n",int_consts);
	printf("#floating_constants = %d\n",float_consts);
	printf("#string_literals = %d\n",string_literals);
	printf("#pointers_declarations = %d\n",pointer_decls);
	printf("#tensor_definitions = %d\n",tensor_definitions);
	printf("#slice_expressions = %d\n",slice_expressions_count);
	printf("#tensor_elementwise_ops = %d\n",tensor_elementwise_ops);
	printf("#tensor_contractions = %d\n",tensor_contractions);
	printf("#tensor_products = %d\n",tensor_products);
	printf("#tensor_loops = %d\n",tensor_loops);
	printf("#loop_labels = %d\n",loop_labels_count);
	printf("#labeled_breaks = %d\n",labeled_breaks);
	printf("#labeled_continues = %d\n",labeled_continues);
	printf("#ifs_without_else = %d\n",ifs_wo_else);
	printf("if-else max-depth = %d\n",((max<0)?0:max));

	return(0);
}
