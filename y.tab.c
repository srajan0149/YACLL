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
int global_declarations=0;
int func_definitions=0;
int int_consts=0;
int pointer_decls=0;
int ifs_wo_else=0;
int ladder_len=0,hold=0;
int max=-1;
/* avoid implicit declarations in generated y.tab.c */
int yylex(void);
void yyerror(const char *);

#line 86 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    APOSTROPHE = 343               /* APOSTROPHE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define I_CONSTANT 259
#define F_CONSTANT 260
#define STRING_LITERAL 261
#define FUNC_NAME 262
#define SIZEOF 263
#define PTR_OP 264
#define INC_OP 265
#define DEC_OP 266
#define LEFT_OP 267
#define RIGHT_OP 268
#define LE_OP 269
#define GE_OP 270
#define EQ_OP 271
#define NE_OP 272
#define TH_OP 273
#define AND_OP 274
#define OR_OP 275
#define MUL_ASSIGN 276
#define DIV_ASSIGN 277
#define MOD_ASSIGN 278
#define ADD_ASSIGN 279
#define SUB_ASSIGN 280
#define LEFT_ASSIGN 281
#define RIGHT_ASSIGN 282
#define AND_ASSIGN 283
#define XOR_ASSIGN 284
#define OR_ASSIGN 285
#define TYPEDEF_NAME 286
#define ENUMERATION_CONSTANT 287
#define TYPEDEF 288
#define EXTERN 289
#define STATIC 290
#define AUTO 291
#define REGISTER 292
#define INLINE 293
#define CONST 294
#define RESTRICT 295
#define VOLATILE 296
#define BOOL 297
#define CHAR 298
#define SHORT 299
#define INT 300
#define LONG 301
#define SIGNED 302
#define UNSIGNED 303
#define FP 304
#define DOUBLE 305
#define VOID 306
#define COMPLEX 307
#define IMAGINARY 308
#define STRUCT 309
#define UNION 310
#define ENUM 311
#define ELLIPSIS 312
#define CASE 313
#define DEFAULT 314
#define IF 315
#define ELSE 316
#define SWITCH 317
#define WHILE 318
#define DO 319
#define FOR 320
#define GOTO 321
#define CONTINUE 322
#define BREAK 323
#define RETURN 324
#define ALIGNAS 325
#define ALIGNOF 326
#define ATOMIC 327
#define GENERIC 328
#define NORETURN 329
#define STATIC_ASSERT 330
#define THREAD_LOCAL 331
#define TEXT 332
#define TENSOR 333
#define ITEM 334
#define AXIS 335
#define IN 336
#define DOT_ADD 337
#define DOT_SUB 338
#define DOT_MUL 339
#define DOT_DIV 340
#define AT 341
#define AT_MUL 342
#define APOSTROPHE 343

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 48 "yapl.y"

	int val;
	int ival;
    double fval;
    char *sval;
	struct symtab *symp;

#line 323 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
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
  YYSYMBOL_APOSTROPHE = 88,                /* APOSTROPHE  */
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
  YYSYMBOL_slice_expression = 120,         /* slice_expression  */
  YYSYMBOL_postfix_expression = 121,       /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 122, /* argument_expression_list  */
  YYSYMBOL_unary_expression = 123,         /* unary_expression  */
  YYSYMBOL_unary_operator = 124,           /* unary_operator  */
  YYSYMBOL_cast_expression = 125,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 126, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 127,      /* additive_expression  */
  YYSYMBOL_shift_expression = 128,         /* shift_expression  */
  YYSYMBOL_relational_expression = 129,    /* relational_expression  */
  YYSYMBOL_equality_expression = 130,      /* equality_expression  */
  YYSYMBOL_and_expression = 131,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 132,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 133,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 134,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 135,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 136,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 137,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 138,      /* assignment_operator  */
  YYSYMBOL_expression = 139,               /* expression  */
  YYSYMBOL_constant_expression = 140,      /* constant_expression  */
  YYSYMBOL_declaration = 141,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 142,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 143,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 144,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 145,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 146,           /* type_specifier  */
  YYSYMBOL_tensor_type = 147,              /* tensor_type  */
  YYSYMBOL_tensor_params = 148,            /* tensor_params  */
  YYSYMBOL_loop_label = 149,               /* loop_label  */
  YYSYMBOL_struct_or_union_specifier = 150, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 151,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 152,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 153,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 154, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 155,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 156,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 157,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 158,          /* enumerator_list  */
  YYSYMBOL_enumerator = 159,               /* enumerator  */
  YYSYMBOL_atomic_type_specifier = 160,    /* atomic_type_specifier  */
  YYSYMBOL_type_qualifier = 161,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 162,       /* function_specifier  */
  YYSYMBOL_alignment_specifier = 163,      /* alignment_specifier  */
  YYSYMBOL_declarator = 164,               /* declarator  */
  YYSYMBOL_165_1 = 165,                    /* $@1  */
  YYSYMBOL_direct_declarator = 166,        /* direct_declarator  */
  YYSYMBOL_pointer = 167,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 168,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 169,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 170,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 171,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 172,          /* identifier_list  */
  YYSYMBOL_type_name = 173,                /* type_name  */
  YYSYMBOL_abstract_declarator = 174,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 175, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 176,              /* initializer  */
  YYSYMBOL_initializer_list = 177,         /* initializer_list  */
  YYSYMBOL_designation = 178,              /* designation  */
  YYSYMBOL_designator_list = 179,          /* designator_list  */
  YYSYMBOL_designator = 180,               /* designator  */
  YYSYMBOL_static_assert_declaration = 181, /* static_assert_declaration  */
  YYSYMBOL_statement = 182,                /* statement  */
  YYSYMBOL_labeled_statement = 183,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 184,       /* compound_statement  */
  YYSYMBOL_block_item_list = 185,          /* block_item_list  */
  YYSYMBOL_block_item = 186,               /* block_item  */
  YYSYMBOL_expression_statement = 187,     /* expression_statement  */
  YYSYMBOL_selection_statement = 188,      /* selection_statement  */
  YYSYMBOL_189_2 = 189,                    /* $@2  */
  YYSYMBOL_loop_statement = 190,           /* loop_statement  */
  YYSYMBOL_iteration_statement = 191,      /* iteration_statement  */
  YYSYMBOL_axis_clause = 192,              /* axis_clause  */
  YYSYMBOL_axis_list = 193,                /* axis_list  */
  YYSYMBOL_dimension_list = 194,           /* dimension_list  */
  YYSYMBOL_jump_statement = 195,           /* jump_statement  */
  YYSYMBOL_translation_unit = 196,         /* translation_unit  */
  YYSYMBOL_external_declaration = 197,     /* external_declaration  */
  YYSYMBOL_function_definition = 198,      /* function_definition  */
  YYSYMBOL_declaration_list = 199          /* declaration_list  */
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
#define YYLAST   2590

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  112
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  88
/* YYNRULES -- Number of rules.  */
#define YYNRULES  304
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  533

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
       0,    59,    59,    60,    61,    62,    63,    67,    68,    69,
      73,    77,    78,    82,    86,    87,    91,    92,    96,    97,
      98,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   116,   117,   121,   122,   123,   124,   125,   126,
     127,   131,   132,   133,   134,   135,   136,   140,   141,   145,
     146,   147,   148,   152,   153,   154,   158,   159,   160,   164,
     165,   166,   167,   168,   169,   173,   174,   175,   179,   180,
     184,   185,   189,   190,   194,   195,   199,   200,   204,   208,
     209,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   227,   228,   229,   230,   231,   232,   233,   234,
     238,   242,   243,   244,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   261,   262,   266,   267,   271,   272,
     273,   274,   275,   276,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   301,   305,   309,   313,   314,   315,   319,   320,
     324,   325,   329,   330,   331,   335,   336,   337,   338,   342,
     343,   347,   348,   349,   353,   354,   355,   356,   357,   361,
     362,   366,   367,   371,   375,   376,   377,   378,   382,   383,
     387,   388,   392,   392,   393,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   414,
     415,   416,   417,   421,   422,   427,   428,   432,   433,   434,
     438,   439,   440,   444,   445,   449,   450,   454,   455,   456,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   484,   485,   486,   490,   491,   492,   493,   497,   501,
     502,   506,   507,   511,   515,   516,   517,   518,   519,   520,
     524,   525,   526,   530,   531,   535,   536,   540,   541,   545,
     546,   551,   550,   561,   565,   569,   570,   571,   572,   573,
     574,   575,   578,   579,   583,   584,   588,   589,   594,   595,
     599,   600,   601,   602,   603,   604,   605,   609,   610,   614,
     615,   619,   620,   624,   625
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
  "APOSTROPHE", "'('", "')'", "','", "':'", "'['", "']'", "'.'", "'{'",
  "'}'", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'",
  "'>'", "'^'", "'|'", "'='", "';'", "$accept", "primary_expression",
  "constant", "enumeration_constant", "string", "generic_selection",
  "generic_assoc_list", "generic_association", "slice_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "tensor_type", "tensor_params", "loop_label",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
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

#define YYPACT_NINF (-404)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-210)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2336,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,
    -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,
    -404,  -404,  -404,  -404,  -404,    59,   -58,   -56,  -404,   -47,
    -404,  -404,    23,  -404,    41,  2432,  2432,  -404,  -404,    61,
    -404,  -404,  2432,  2432,  2432,  -404,  2000,  -404,  -404,   -18,
     134,   949,  2512,  1671,   846,  -404,    32,   158,  -404,   -41,
    -404,  1920,   -63,  -404,  -404,  -404,    46,   556,  -404,  -404,
    -404,  -404,  -404,   134,  -404,    51,   -36,  -404,  -404,  -404,
    -404,  -404,  -404,  1686,  1719,  1719,  -404,    75,    77,   949,
    -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,
     161,  -404,  1671,  -404,    83,   -42,   132,   145,   173,    82,
     100,   123,   203,   233,  -404,   165,  2512,    76,  2512,   168,
     179,   172,   -56,   180,   166,   186,  -404,  -404,  -404,   158,
      32,  -404,   483,  1437,  -404,    41,  -404,  2214,  1862,  1004,
      26,   556,  2109,  -404,    35,  -404,   113,  1671,    17,  -404,
     949,  -404,   949,  -404,  -404,  2512,  1671,   219,  -404,  -404,
     366,   194,   283,  -404,  -404,  1452,  1511,   286,  -404,  1671,
    1671,  1671,  1671,  1671,  1671,  1671,  1671,  1671,  1671,  1671,
    1671,  1671,  1671,  1671,  1671,  1671,  1671,  1671,  -404,  -404,
    2048,  1050,   -26,  -404,    92,  -404,  -404,  -404,   293,   302,
    -404,  -404,  -404,  -404,  -404,   199,   228,  1671,   229,   234,
     237,   239,   767,    14,   327,    24,    25,   839,   329,  -404,
    -404,   313,  -404,   142,  -404,  -404,  -404,   611,  -404,  -404,
    -404,  -404,  -404,  -404,  1404,  -404,  -404,  -404,  -404,  -404,
    -404,    69,   243,   244,  -404,   171,  1282,  -404,   256,   260,
    1106,   -63,  2149,  -404,  -404,  1671,  -404,   -34,  -404,   245,
      19,  -404,  -404,  -404,  -404,   248,   267,   268,   269,  -404,
    -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,  -404,
    1671,  1671,  1671,  1671,  1671,  1671,  1671,  -404,  1671,  1553,
    -404,  -404,   177,  -404,  -404,    10,   196,  -404,  -404,  -404,
    -404,    83,    83,   -42,   -42,   132,   132,   132,   132,   132,
     145,   145,   173,    82,   100,   123,   203,  -404,   272,   276,
    1282,  -404,   265,   273,  1125,    92,  2278,  1181,   280,  -404,
     284,   767,   285,   767,  1671,  1671,  1671,   315,   295,   713,
     271,   274,  -404,   275,  -404,  -404,   336,   291,  -404,  -404,
    -404,  -404,  1671,   381,  -404,   126,  1437,   -39,  -404,  1792,
    -404,    85,  -404,  -404,  2384,  -404,   385,   298,  1282,  -404,
    -404,  1671,  -404,   307,   308,  -404,  -404,    94,  -404,  1671,
    -404,   309,   309,  -404,  2472,  -404,   207,   207,   147,   147,
     312,   312,  -404,  1404,  -404,  -404,  1671,  1511,  -404,  -404,
    -404,  -404,   317,  1282,  -404,  -404,  1671,  -404,   319,  -404,
     299,  1282,  -404,   321,   322,  1226,   296,   413,  -404,   767,
    -404,   415,   643,   710,   341,   422,   876,   876,  -404,  -404,
    -404,  -404,  -404,   337,  -404,  1299,  -404,  -404,  -404,  -404,
     342,  -404,  -404,  -404,   338,   340,  -404,  -404,  -404,  -404,
     343,   205,  -404,   345,   129,  -404,   348,   261,  -404,   346,
     347,  -404,  -404,   349,  1282,  -404,  -404,  1671,  -404,   350,
    -404,  -404,  -404,   767,   767,   767,  1671,   374,  1570,  1612,
    -404,  -404,  -404,  1437,  -404,  -404,  1671,  -404,  2472,  1671,
    1332,  -404,  -404,  -404,  -404,   352,   361,  -404,   416,  -404,
    -404,   980,   389,   383,   767,  1085,   767,  1156,  -404,  -404,
    -404,  -404,  -404,  -404,  -404,  -404,   369,   477,  -404,  -404,
     767,  -404,   767,   767,  -404,  -404,   221,  -404,  -404,  -404,
    -404,   478,  -404
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   141,   118,   119,   120,   122,   123,   178,   174,   175,
     176,   135,   125,   126,   127,   128,   131,   132,   129,   130,
     124,   136,   137,   148,   149,     0,     0,   177,   179,     0,
     121,   133,     0,   300,     0,   105,   107,   134,   139,     0,
     140,   138,   109,   111,   113,   103,     0,   297,   299,   168,
       0,     0,     0,     0,     0,   185,     0,   202,   101,     0,
     114,   117,   184,   182,   104,   106,   147,     0,   108,   110,
     112,     1,   298,     0,    10,   172,     0,   169,     2,     7,
       8,    11,    12,     0,     0,     0,     9,     0,     0,     0,
      41,    42,    43,    44,    45,    46,    21,     3,     4,     6,
      34,    47,     0,    49,    53,    56,    59,    65,    68,    70,
      72,    74,    76,    78,   100,     0,   156,   216,   158,     0,
       0,     0,     0,     0,     0,     0,   177,   203,   201,   200,
       0,   102,     0,     0,   303,     0,   302,     0,     0,     0,
       0,     0,     0,   150,     0,   154,     0,     0,     0,   164,
       0,    38,     0,    35,    36,     0,     0,    47,    79,    92,
       0,     0,     0,    28,    29,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   181,   155,
       0,     0,   218,   215,   219,   157,   180,   173,     0,     0,
     142,   186,   204,   199,   115,   117,     2,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   263,
     269,     0,   267,     0,   268,   254,   255,     0,   265,   256,
     257,   282,   258,   259,     0,   243,   116,   304,   301,   213,
     197,   212,     0,   206,   207,     0,     0,   187,    42,     0,
       0,   183,     0,   145,   151,     0,   152,     0,   159,   163,
       0,   166,   171,   165,   170,     0,     0,     0,     0,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    81,
       0,     0,     0,     0,     0,     0,     0,     5,     0,     0,
      27,    24,     0,    32,    19,     0,     0,    26,    50,    51,
      52,    54,    55,    57,    58,    62,    63,    64,    60,    61,
      66,    67,    69,    71,    73,    75,    77,   237,     0,     0,
       0,   221,    42,     0,     0,   217,     0,     0,     0,   288,
     143,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   291,     0,   293,   295,     0,     0,   270,   283,
     264,   266,     0,     0,   245,     0,     0,     0,   249,     0,
     210,   218,   211,   196,     0,   198,     0,     0,     0,   188,
     195,     0,   194,    42,     0,   146,   161,     0,   153,     0,
     167,    39,     0,    40,     0,    80,    94,    95,    96,    97,
      98,    99,    93,     0,    48,    25,     0,     0,    23,    22,
     238,   220,     0,     0,   222,   228,     0,   227,     0,   239,
       0,     0,   229,    42,     0,     0,     0,     0,   260,     0,
     262,     0,     0,     0,     0,     0,     0,     0,   290,   292,
     294,   296,   144,     0,   252,     0,   241,   244,   248,   250,
     205,   208,   214,   190,     0,     0,   191,   193,   160,   162,
       0,     0,    14,     0,     0,    33,    20,    18,   224,     0,
       0,   226,   240,     0,     0,   230,   236,     0,   235,     0,
     253,   289,   261,     0,     0,     0,     0,   284,     0,     0,
     251,   242,   247,     0,   189,   192,     0,    13,     0,     0,
       0,    30,   223,   225,   232,     0,     0,   233,   273,   274,
     275,     0,     0,     0,     0,     0,     0,     0,   246,    17,
      15,    16,    31,   231,   234,   271,     0,     0,   281,   279,
       0,   277,     0,     0,   276,   286,     0,   280,   278,   272,
     285,     0,   287
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -404,  -404,  -404,  -404,  -404,  -404,  -404,    -5,    87,  -404,
    -404,   289,  -404,   -86,    63,   139,   125,   135,   320,   301,
     310,   306,   323,  -404,   -30,   -96,  -404,   -70,   -28,   -51,
       5,  -404,   377,  -404,   -43,  -404,  -404,  -404,  -404,  -404,
     363,  -124,     7,  -404,   131,  -404,   436,  -134,  -404,   -50,
    -404,  -404,   -22,  -404,   371,   -23,  -126,  -135,  -404,   148,
    -404,     1,  -102,  -188,  -127,   120,  -403,  -404,   183,   -31,
     -94,  -404,   -61,  -404,   335,  -294,  -404,  -404,   344,  -404,
    -404,  -404,  -404,  -404,  -404,   517,  -404,  -404
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    96,    97,    75,    98,    99,   451,   452,   295,   100,
     292,   157,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   158,   159,   280,   221,   115,    33,
     135,    59,    60,    35,    36,    37,   124,   223,    38,    39,
     142,   143,   117,   257,   258,    40,    76,    77,    41,    42,
      43,    44,   125,   140,    62,    63,   129,   318,   243,   244,
     245,   453,   319,   194,   354,   355,   356,   357,   358,    45,
     224,   225,   226,   227,   228,   229,   230,   523,   231,   232,
     503,   526,   330,   233,    46,    47,    48,   137
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     136,   118,   118,   242,   325,    34,   236,   127,   116,   116,
     134,   123,    61,   250,   264,   193,   168,   118,   254,   160,
      74,   114,    74,   114,   116,   121,   138,   341,   343,    55,
     139,    51,   483,    52,   128,    55,   145,   235,    55,   118,
      64,    65,    53,   249,    55,   427,   116,    68,    69,    70,
     130,    34,   119,   120,   352,   148,   353,   377,   172,   173,
     268,   149,    49,   190,    66,   324,   118,   191,   118,   293,
     131,   438,    55,   116,   144,   116,   238,   378,    73,   202,
     160,   222,   160,   298,   299,   300,   237,   483,  -182,   127,
     161,   118,   118,   338,   192,   323,   296,    55,   116,   116,
     118,   397,   118,   339,   398,   118,   203,   116,   205,   116,
     145,   145,   116,   205,   263,    56,   380,   114,   337,   262,
     368,    56,   259,   189,    56,   195,   264,   255,   254,    54,
      56,    57,   478,   479,    57,   342,   344,    74,   235,   362,
      57,   127,   141,   241,   174,   175,   256,   346,   144,   144,
     367,   265,    58,   266,   374,    50,   267,    67,   359,   176,
     177,   147,   191,   178,   155,   190,   156,   192,    57,   191,
     162,   163,   164,   325,   190,    57,   222,   114,   191,   332,
     183,   326,   169,    56,   385,   327,   255,   170,   171,   181,
     182,   410,   392,    57,   403,   241,   127,     8,     9,    10,
     202,   415,   118,   394,   260,   211,   212,   213,   184,   116,
     261,   386,   387,   388,   389,   390,   391,   435,   361,   360,
     490,   145,   186,   436,   402,   114,   491,   376,   408,   437,
     126,   414,   185,   285,   286,   301,   302,   418,   288,   420,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     165,   179,   180,   187,   166,   188,   167,    57,   196,   144,
     235,   365,   366,   198,   421,   422,   423,   395,   396,   197,
     127,   199,   444,   200,   202,   445,   201,   127,   281,   282,
     283,   284,   285,   286,   289,   464,   290,   288,   426,   297,
     399,   283,   284,   285,   286,   487,   488,   235,   288,   328,
     455,   305,   306,   307,   308,   309,   329,   459,   482,   133,
     460,   530,   531,   303,   304,   463,   310,   311,   202,   469,
     331,   333,   114,   334,   433,   472,   335,   457,   336,   279,
     340,   241,   347,   363,   118,   364,   361,   379,   381,   235,
     101,   116,   101,   281,   282,   283,   284,   285,   286,   114,
     369,   449,   288,   202,   370,   259,   508,   382,   383,   404,
     384,   127,   400,   482,   241,   202,   401,   405,   495,   241,
     416,   496,   151,   153,   154,   417,   425,   419,   424,   498,
     499,   500,   428,   432,   434,   429,   430,   235,   442,   462,
     509,   101,   443,   511,   235,   281,   282,   283,   284,   285,
     286,   446,   447,   288,   288,   393,   501,   470,   505,   507,
     519,   458,   521,   461,   202,   465,   466,   471,   281,   282,
     283,   284,   285,   286,   348,   477,   527,   288,   528,   529,
     476,   480,   484,  -209,   485,   486,   101,   489,   118,   397,
     492,   493,   518,   494,   497,   116,   513,   431,   281,   282,
     283,   284,   285,   286,   502,   514,   287,   288,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   515,   517,   132,
     524,   525,   532,   510,   456,   313,   206,    79,    80,    81,
      82,    83,   315,    84,    85,   314,   101,   281,   282,   283,
     284,   285,   286,   312,   252,   473,   288,   204,   448,   146,
     316,   251,   441,   454,     1,    86,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
     439,   207,   208,   209,   101,   210,   211,   212,   213,   214,
     215,   216,   217,    26,    87,    27,    88,    28,    29,    30,
      31,    32,   351,    72,     0,     0,     0,   349,     0,     0,
       0,   218,    89,     0,     0,     0,     0,     0,   101,   132,
     219,    90,    91,    92,    93,    94,    95,     1,     0,     0,
       0,     0,     0,     0,   220,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,   206,    79,    80,    81,    82,    83,
       0,    84,    85,     0,     0,     0,     0,     0,    27,     0,
       0,    29,     0,    31,    32,     0,     0,     0,     0,     0,
       0,   101,     1,    86,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,   101,   207,
     208,   209,     0,   210,   211,   212,   213,   214,   215,   216,
     217,    26,    87,    27,    88,    28,    29,    30,    31,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   218,
      89,     0,     0,     0,     0,     0,     0,   132,   350,    90,
      91,    92,    93,    94,    95,     0,    78,    79,    80,    81,
      82,    83,   220,    84,    85,   281,   282,   283,   284,   285,
     286,     0,     0,   474,   288,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,    86,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
     206,    79,    80,    81,    82,    83,     0,    84,    85,     0,
       0,     0,     0,    26,    87,    27,    88,    28,    29,    30,
      31,    32,   281,   282,   283,   284,   285,   286,     0,    86,
     475,   288,    89,     0,     0,     0,     0,     0,     0,     0,
       0,    90,    91,    92,    93,    94,    95,     0,     0,     0,
       0,     0,     0,     0,   220,   207,   208,   209,     0,   210,
     211,   212,   213,   214,   215,   216,   217,     0,    87,     0,
      88,     0,    78,    79,    80,    81,    82,    83,     0,    84,
      85,     0,     0,     0,     0,   218,    89,     0,     0,     0,
       0,     0,     0,   132,     0,    90,    91,    92,    93,    94,
      95,    86,     0,     0,     0,     0,     0,     1,   220,    78,
      79,    80,    81,    82,    83,     0,    84,    85,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,    86,     0,
      87,     0,    88,     0,     0,     0,     0,     0,   122,     0,
       0,     0,     0,    31,    32,     0,     0,     0,    89,     0,
       0,     0,     0,     0,     0,     0,     0,    90,    91,    92,
      93,    94,    95,     0,     0,     0,     0,    87,     0,    88,
     345,     0,    78,    79,    80,    81,    82,    83,     0,    84,
      85,     0,     0,     0,     0,    89,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    91,    92,    93,    94,    95,
       1,    86,     0,     0,     0,     0,     0,   220,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    78,    79,    80,
      81,    82,    83,     0,    84,    85,     0,     0,     0,     0,
      87,    27,    88,     0,     0,     0,    31,    32,     0,     0,
       0,     0,     0,     0,     0,     0,    86,     0,    89,   246,
       0,     0,     0,     8,     9,    10,     0,    90,    91,    92,
      93,    94,    95,    78,    79,    80,    81,    82,    83,     0,
      84,    85,   281,   282,   283,   284,   285,   286,     0,     0,
     516,   288,     0,     0,     0,    87,   126,    88,     0,     0,
       0,     0,    86,     0,     0,   320,     0,     0,     0,     8,
       9,    10,     0,    89,     0,     0,     0,     0,   247,     0,
       0,     0,    90,   248,    92,    93,    94,    95,     0,    78,
      79,    80,    81,    82,    83,     0,    84,    85,     0,     0,
       0,    87,   126,    88,     0,     0,     0,     0,    78,    79,
      80,    81,    82,    83,     0,    84,    85,     0,    86,    89,
       0,   371,     0,     0,   321,     8,     9,    10,    90,   322,
      92,    93,    94,    95,     0,     0,     0,    86,     0,     0,
     406,     0,     0,     0,     8,     9,    10,   281,   282,   283,
     284,   285,   286,     0,     0,   520,   288,    87,   126,    88,
       0,     0,     0,     0,    78,    79,    80,    81,    82,    83,
       0,    84,    85,     0,     0,    89,    87,   126,    88,     0,
     372,     0,     0,     0,    90,   373,    92,    93,    94,    95,
       0,     0,     0,    86,    89,     0,   411,     0,     0,   407,
       8,     9,    10,    90,    91,    92,    93,    94,    95,    78,
      79,    80,    81,    82,    83,     0,    84,    85,   281,   282,
     283,   284,   285,   286,     0,     0,   522,   288,     0,     0,
       0,     0,    87,   126,    88,     0,     0,     0,    86,     0,
       0,   467,     0,     0,     0,     8,     9,    10,     0,     0,
      89,     0,     0,     0,     0,   412,     0,     0,     0,    90,
     413,    92,    93,    94,    95,    78,    79,    80,    81,    82,
      83,     0,    84,    85,     0,     0,     0,    87,   126,    88,
       0,     0,    78,    79,    80,    81,    82,    83,     0,    84,
      85,     0,     0,     0,    86,    89,     0,     0,     0,     0,
     468,     8,     9,    10,    90,    91,    92,    93,    94,    95,
       0,    86,     0,     0,     0,    78,    79,    80,    81,    82,
      83,     0,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,   126,    88,     0,     0,     0,     0,
       0,     0,     0,     0,    86,     0,     0,     0,     0,     0,
      87,    89,    88,     0,     0,     0,     0,     0,     0,     0,
      90,    91,    92,    93,    94,    95,     0,     0,    89,     0,
       0,     0,   352,     0,   353,   234,   481,    90,    91,    92,
      93,    94,    95,    87,     0,    88,     0,    78,    79,    80,
      81,    82,    83,     0,    84,    85,     0,     0,     0,     0,
       0,    89,     0,     0,     0,   352,     0,   353,   234,   512,
      90,    91,    92,    93,    94,    95,    86,     0,     0,     0,
      78,    79,    80,    81,    82,    83,     0,    84,    85,     0,
       0,     0,     0,     0,     0,    78,    79,    80,    81,    82,
      83,     0,    84,    85,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,     0,    87,     0,    88,     0,     0,
       0,     0,     0,     0,    86,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,     0,     0,   352,     0,   353,
     234,     0,    90,    91,    92,    93,    94,    95,    87,     0,
      88,     0,     0,     0,    78,    79,    80,    81,    82,    83,
       0,    84,    85,    87,     0,    88,    89,     0,     0,     0,
       0,     0,     0,   234,     0,    90,    91,    92,    93,    94,
      95,    89,   291,    86,     0,     0,     0,     0,     0,     0,
      90,    91,    92,    93,    94,    95,    78,    79,    80,    81,
      82,    83,     0,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,    78,    79,    80,    81,    82,    83,     0,
      84,    85,    87,     0,    88,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      89,     0,    86,   294,     0,     0,     0,     0,     0,    90,
      91,    92,    93,    94,    95,    78,    79,    80,    81,    82,
      83,     0,    84,    85,    87,     0,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,    89,    88,    86,     0,     0,     0,     0,   393,
       0,    90,    91,    92,    93,    94,    95,     0,     0,    89,
     504,     0,     0,     0,     0,     0,     0,     0,    90,    91,
      92,    93,    94,    95,    78,    79,    80,    81,    82,    83,
       0,    84,    85,    87,     0,    88,     0,     0,     0,    78,
      79,    80,    81,    82,    83,     0,    84,    85,     0,     0,
       0,    89,   506,    86,     0,     0,     0,     0,     0,     0,
      90,    91,    92,    93,    94,    95,     0,     0,    86,     0,
       0,     0,    78,    79,    80,    81,    82,    83,     0,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,    88,     0,     0,     0,     0,     0,
       0,    86,     0,     0,     0,     0,     0,    87,     0,    88,
      89,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      91,    92,    93,    94,    95,   150,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    91,    92,    93,    94,    95,
      87,     0,    88,     0,     0,    55,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   152,     0,
       0,     0,     0,     0,     0,     0,     0,    90,    91,    92,
      93,    94,    95,     1,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,   239,    28,     0,    30,    31,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   359,   317,     0,     0,   191,     0,     0,     0,     0,
       0,    57,     0,     1,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,    28,     0,    30,    31,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,   240,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,    28,    29,    30,    31,    32,     0,
      71,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   132,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     133,     1,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,     0,    28,    29,    30,    31,    32,     1,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,     0,    30,    31,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   190,   317,     0,
       1,   191,     0,     0,     0,     0,     0,    57,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,    27,     0,     0,    29,     0,    31,    32,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   253,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,     0,    29,     0,    31,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,   375,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,    29,
      30,    31,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
     132,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,     0,    28,     0,    30,    31,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,   409,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,     0,    27,     0,
      28,    29,    30,    31,    32,     1,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   440,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,     0,
      30,    31,    32,     1,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     1,    27,     0,    28,     0,    30,    31,
      32,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,   450,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,    27,     0,     0,     0,     0,    31,
      32,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,     0,     0,     0,    31,
      32
};

static const yytype_int16 yycheck[] =
{
      61,    51,    52,   138,   192,     0,   133,    57,    51,    52,
      61,    54,    34,   139,   148,   117,   102,    67,   142,    89,
       3,    51,     3,    53,    67,    53,    89,     3,     3,     3,
      93,    89,   435,    89,    57,     3,    67,   133,     3,    89,
      35,    36,    89,   139,     3,   339,    89,    42,    43,    44,
      91,    46,    51,    52,    93,    91,    95,    91,   100,   101,
     156,    97,     3,    89,     3,   191,   116,    93,   118,   165,
     111,   110,     3,   116,    67,   118,   137,   111,    96,   129,
     150,   132,   152,   169,   170,   171,   137,   490,     3,   139,
      89,   141,   142,    79,   117,   191,   166,     3,   141,   142,
     150,    91,   152,    89,    94,   155,   129,   150,   130,   152,
     141,   142,   155,   135,    97,    89,    97,   147,   212,   147,
     246,    89,   144,   116,    89,   118,   260,    92,   252,   106,
      89,    99,   426,   427,    99,   111,   111,     3,   234,   241,
      99,   191,    96,   138,    12,    13,   111,   217,   141,   142,
     246,   150,   111,   152,   250,    96,   155,    96,    89,    14,
      15,   110,    93,    18,    89,    89,    89,   190,    99,    93,
       9,    10,    11,   361,    89,    99,   227,   207,    93,   207,
      98,    89,    99,    89,   280,    93,    92,   104,   105,    16,
      17,   326,   288,    99,   320,   190,   246,    39,    40,    41,
     250,   327,   252,   289,    91,    63,    64,    65,   108,   252,
      97,   281,   282,   283,   284,   285,   286,    91,   241,   241,
      91,   252,    19,    97,   320,   255,    97,   255,   324,   356,
      72,   327,   109,    86,    87,   172,   173,   331,    91,   333,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      89,   106,   107,    20,    93,    90,    95,    99,    90,   252,
     356,    90,    91,    91,   334,   335,   336,    90,    91,    90,
     320,    91,   368,   107,   324,   371,    90,   327,    82,    83,
      84,    85,    86,    87,    90,   411,     3,    91,   339,     3,
      94,    84,    85,    86,    87,    90,    91,   393,    91,     6,
     396,   176,   177,   178,   179,   180,     4,   403,   435,   110,
     406,    90,    91,   174,   175,   411,   181,   182,   368,   415,
      92,    92,   352,    89,   352,   419,    89,   397,    89,   110,
       3,   326,     3,    90,   384,    91,   359,    92,    90,   435,
      51,   384,    53,    82,    83,    84,    85,    86,    87,   379,
      94,   379,    91,   403,    94,   377,   483,    90,    90,    94,
      91,   411,    90,   490,   359,   415,    90,    94,   464,   364,
      90,   467,    83,    84,    85,    91,    81,    92,    63,   473,
     474,   475,   111,    92,     3,   111,   111,   483,     3,    90,
     486,   102,    94,   489,   490,    82,    83,    84,    85,    86,
      87,    94,    94,    91,    91,    96,   476,   111,   478,   479,
     504,    94,   506,    94,   464,    94,    94,     4,    82,    83,
      84,    85,    86,    87,   111,     3,   520,    91,   522,   523,
      89,    94,    94,    91,    94,    92,   147,    92,   488,    91,
      94,    94,   503,    94,    94,   488,    94,   111,    82,    83,
      84,    85,    86,    87,    80,    94,    90,    91,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,    61,    89,    96,
     111,     4,     4,   488,   397,   184,     3,     4,     5,     6,
       7,     8,   186,    10,    11,   185,   207,    82,    83,    84,
      85,    86,    87,   183,   141,    90,    91,   130,   377,    73,
     187,   140,   364,   393,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
     357,    58,    59,    60,   255,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,   227,    46,    -1,    -1,    -1,   223,    -1,    -1,
      -1,    88,    89,    -1,    -1,    -1,    -1,    -1,   289,    96,
      97,    98,    99,   100,   101,   102,   103,    31,    -1,    -1,
      -1,    -1,    -1,    -1,   111,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    75,    -1,    77,    78,    -1,    -1,    -1,    -1,    -1,
      -1,   352,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,   379,    58,
      59,    60,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,   100,   101,   102,   103,    -1,     3,     4,     5,     6,
       7,     8,   111,    10,    11,    82,    83,    84,    85,    86,
      87,    -1,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    82,    83,    84,    85,    86,    87,    -1,    32,
      90,    91,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    99,   100,   101,   102,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   111,    58,    59,    60,    -1,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    71,    -1,
      73,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    88,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    98,    99,   100,   101,   102,
     103,    32,    -1,    -1,    -1,    -1,    -1,    31,   111,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      71,    -1,    73,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    77,    78,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,    -1,    -1,    -1,    -1,    71,    -1,    73,
     111,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
      31,    32,    -1,    -1,    -1,    -1,    -1,   111,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      71,    72,    73,    -1,    -1,    -1,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    89,    35,
      -1,    -1,    -1,    39,    40,    41,    -1,    98,    99,   100,
     101,   102,   103,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    82,    83,    84,    85,    86,    87,    -1,    -1,
      90,    91,    -1,    -1,    -1,    71,    72,    73,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,    39,
      40,    41,    -1,    89,    -1,    -1,    -1,    -1,    94,    -1,
      -1,    -1,    98,    99,   100,   101,   102,   103,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    71,    72,    73,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    32,    89,
      -1,    35,    -1,    -1,    94,    39,    40,    41,    98,    99,
     100,   101,   102,   103,    -1,    -1,    -1,    32,    -1,    -1,
      35,    -1,    -1,    -1,    39,    40,    41,    82,    83,    84,
      85,    86,    87,    -1,    -1,    90,    91,    71,    72,    73,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    89,    71,    72,    73,    -1,
      94,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
      -1,    -1,    -1,    32,    89,    -1,    35,    -1,    -1,    94,
      39,    40,    41,    98,    99,   100,   101,   102,   103,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    82,    83,
      84,    85,    86,    87,    -1,    -1,    90,    91,    -1,    -1,
      -1,    -1,    71,    72,    73,    -1,    -1,    -1,    32,    -1,
      -1,    35,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    98,
      99,   100,   101,   102,   103,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    71,    72,    73,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    32,    89,    -1,    -1,    -1,    -1,
      94,    39,    40,    41,    98,    99,   100,   101,   102,   103,
      -1,    32,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      71,    89,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,    -1,    -1,    89,    -1,
      -1,    -1,    93,    -1,    95,    96,    97,    98,    99,   100,
     101,   102,   103,    71,    -1,    73,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    93,    -1,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    32,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    93,    -1,    95,
      96,    -1,    98,    99,   100,   101,   102,   103,    71,    -1,
      73,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    71,    -1,    73,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    98,    99,   100,   101,   102,
     103,    89,    90,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    71,    -1,    73,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    32,    92,    -1,    -1,    -1,    -1,    -1,    98,
      99,   100,   101,   102,   103,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    71,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    89,    73,    32,    -1,    -1,    -1,    -1,    96,
      -1,    98,    99,   100,   101,   102,   103,    -1,    -1,    89,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    99,
     100,   101,   102,   103,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    71,    -1,    73,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    89,    90,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    99,   100,   101,   102,   103,    -1,    -1,    32,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      99,   100,   101,   102,   103,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    99,   100,   101,   102,   103,
      71,    -1,    73,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,    31,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,     3,    74,    -1,    76,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    90,    -1,    -1,    93,    -1,    -1,    -1,    -1,
      -1,    99,    -1,    31,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    -1,    74,    -1,    76,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    90,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    74,    75,    76,    77,    78,    -1,
       0,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     110,    31,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    72,    -1,    74,    75,    76,    77,    78,    31,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    74,    -1,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    -1,
      31,    93,    -1,    -1,    -1,    -1,    -1,    99,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    72,    -1,    -1,    75,    -1,    77,    78,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    75,    -1,    77,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    97,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,    75,
      76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      96,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,
      72,    -1,    74,    -1,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    90,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    -1,
      74,    75,    76,    77,    78,    31,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    72,    -1,    74,    -1,
      76,    77,    78,    31,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    31,    72,    -1,    74,    -1,    76,    77,
      78,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    72,    -1,    -1,    -1,    -1,    77,
      78,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    77,
      78
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    31,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    70,    72,    74,    75,
      76,    77,    78,   141,   142,   145,   146,   147,   150,   151,
     157,   160,   161,   162,   163,   181,   196,   197,   198,     3,
      96,    89,    89,    89,   106,     3,    89,    99,   111,   143,
     144,   164,   166,   167,   142,   142,     3,    96,   142,   142,
     142,     0,   197,    96,     3,   115,   158,   159,     3,     4,
       5,     6,     7,     8,    10,    11,    32,    71,    73,    89,
      98,    99,   100,   101,   102,   103,   113,   114,   116,   117,
     121,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   140,   146,   154,   161,   173,
     173,   140,    72,   146,   148,   164,    72,   161,   167,   168,
      91,   111,    96,   110,   141,   142,   184,   199,    89,    93,
     165,    96,   152,   153,   154,   181,   158,   110,    91,    97,
      89,   123,    89,   123,   123,    89,    89,   123,   136,   137,
     139,   173,     9,    10,    11,    89,    93,    95,   125,    99,
     104,   105,   100,   101,    12,    13,    14,    15,    18,   106,
     107,    16,    17,    98,   108,   109,    19,    20,    90,   154,
      89,    93,   167,   174,   175,   154,    90,    90,    91,    91,
     107,    90,   161,   167,   144,   164,     3,    58,    59,    60,
      62,    63,    64,    65,    66,    67,    68,    69,    88,    97,
     111,   139,   141,   149,   182,   183,   184,   185,   186,   187,
     188,   190,   191,   195,    96,   137,   176,   141,   184,     3,
      90,   142,   169,   170,   171,   172,    35,    94,    99,   137,
     168,   166,   152,    97,   153,    92,   111,   155,   156,   164,
      91,    97,   140,    97,   159,   173,   173,   173,   137,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   110,
     138,    82,    83,    84,    85,    86,    87,    90,    91,    90,
       3,    90,   122,   137,    92,   120,   139,     3,   125,   125,
     125,   126,   126,   127,   127,   128,   128,   128,   128,   128,
     129,   129,   130,   131,   132,   133,   134,    90,   169,   174,
      35,    94,    99,   137,   168,   175,    89,    93,     6,     4,
     194,    92,   140,    92,    89,    89,    89,   182,    79,    89,
       3,     3,   111,     3,   111,   111,   139,     3,   111,   190,
      97,   186,    93,    95,   176,   177,   178,   179,   180,    89,
     164,   167,   174,    90,    91,    90,    91,   137,   168,    94,
      94,    35,    94,    99,   137,    97,   140,    91,   111,    92,
      97,    90,    90,    90,    91,   137,   139,   139,   139,   139,
     139,   139,   137,    96,   125,    90,    91,    91,    94,    94,
      90,    90,   137,   168,    94,    94,    35,    94,   137,    90,
     169,    35,    94,    99,   137,   168,    90,    91,   182,    92,
     182,   139,   139,   139,    63,    81,   141,   187,   111,   111,
     111,   111,    92,   140,     3,    91,    97,   176,   110,   180,
      57,   171,     3,    94,   137,   137,    94,    94,   156,   140,
      59,   118,   119,   173,   177,   137,   120,   139,    94,   137,
     137,    94,    90,   137,   168,    94,    94,    35,    94,   137,
     111,     4,   182,    90,    90,    90,    89,     3,   187,   187,
      94,    97,   176,   178,    94,    94,    92,    90,    91,    92,
      91,    97,    94,    94,    94,   137,   137,    94,   182,   182,
     182,   139,    80,   192,    90,   139,    90,   139,   176,   137,
     119,   137,    97,    94,    94,    61,    90,    89,   184,   182,
      90,   182,    90,   189,   111,     4,   193,   182,   182,   182,
      90,    91,     4
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   112,   113,   113,   113,   113,   113,   114,   114,   114,
     115,   116,   116,   117,   118,   118,   119,   119,   120,   120,
     120,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   122,   122,   123,   123,   123,   123,   123,   123,
     123,   124,   124,   124,   124,   124,   124,   125,   125,   126,
     126,   126,   126,   127,   127,   127,   128,   128,   128,   129,
     129,   129,   129,   129,   129,   130,   130,   130,   131,   131,
     132,   132,   133,   133,   134,   134,   135,   135,   136,   137,
     137,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   139,   139,   139,   139,   139,   139,   139,   139,
     140,   141,   141,   141,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   143,   143,   144,   144,   145,   145,
     145,   145,   145,   145,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   147,   148,   149,   150,   150,   150,   151,   151,
     152,   152,   153,   153,   153,   154,   154,   154,   154,   155,
     155,   156,   156,   156,   157,   157,   157,   157,   157,   158,
     158,   159,   159,   160,   161,   161,   161,   161,   162,   162,
     163,   163,   165,   164,   164,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   167,
     167,   167,   167,   168,   168,   169,   169,   170,   170,   170,
     171,   171,   171,   172,   172,   173,   173,   174,   174,   174,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   175,
     175,   176,   176,   176,   177,   177,   177,   177,   178,   179,
     179,   180,   180,   181,   182,   182,   182,   182,   182,   182,
     183,   183,   183,   184,   184,   185,   185,   186,   186,   187,
     187,   189,   188,   188,   188,   190,   190,   190,   190,   190,
     190,   190,   191,   191,   192,   192,   193,   193,   194,   194,
     195,   195,   195,   195,   195,   195,   195,   196,   196,   197,
     197,   198,   198,   199,   199
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     6,     1,     3,     3,     3,     1,     1,
       3,     1,     4,     4,     3,     4,     3,     3,     2,     2,
       6,     7,     1,     3,     1,     2,     2,     2,     2,     4,
       4,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       1,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     3,     4,     5,     2,     1,     1,
       1,     2,     2,     3,     1,     2,     1,     2,     1,     1,
       3,     2,     3,     1,     4,     5,     5,     6,     2,     1,
       3,     3,     1,     4,     1,     1,     1,     1,     1,     1,
       4,     4,     0,     3,     1,     1,     3,     3,     4,     6,
       5,     5,     6,     5,     4,     4,     4,     3,     4,     3,
       2,     2,     1,     1,     2,     3,     1,     1,     3,     3,
       2,     2,     1,     1,     3,     2,     1,     2,     1,     1,
       3,     2,     3,     5,     4,     5,     4,     3,     3,     3,
       4,     6,     5,     5,     6,     4,     4,     2,     3,     3,
       4,     3,     4,     1,     2,     1,     4,     3,     2,     1,
       2,     3,     2,     7,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     2,     3,     1,     2,     1,     1,     1,
       2,     0,     8,     5,     5,     5,     7,     6,     7,     6,
       7,     6,     1,     2,     0,     4,     1,     3,     1,     3,
       3,     2,     3,     2,     3,     2,     3,     1,     2,     1,
       1,     4,     3,     1,     2
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
#line 67 "yapl.y"
                     {int_consts++;}
#line 2322 "y.tab.c"
    break;

  case 182: /* $@1: %empty  */
#line 392 "yapl.y"
                  {pointer_decls++;}
#line 2328 "y.tab.c"
    break;

  case 271: /* $@2: %empty  */
#line 551 "yapl.y"
      {
          ladder_len++;
      }
#line 2336 "y.tab.c"
    break;

  case 272: /* selection_statement: IF '(' expression ')' statement ELSE $@2 statement  */
#line 555 "yapl.y"
      {
          if (ladder_len >= max) {
              max = ladder_len;
          }
          ladder_len--;
      }
#line 2347 "y.tab.c"
    break;

  case 273: /* selection_statement: IF '(' expression ')' statement  */
#line 562 "yapl.y"
      {
          ifs_wo_else++;
      }
#line 2355 "y.tab.c"
    break;

  case 297: /* translation_unit: external_declaration  */
#line 609 "yapl.y"
                               {global_declarations++;}
#line 2361 "y.tab.c"
    break;

  case 298: /* translation_unit: translation_unit external_declaration  */
#line 610 "yapl.y"
                                                {global_declarations++;}
#line 2367 "y.tab.c"
    break;

  case 299: /* external_declaration: function_definition  */
#line 614 "yapl.y"
                              {func_definitions++;}
#line 2373 "y.tab.c"
    break;


#line 2377 "y.tab.c"

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

#line 628 "yapl.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char buff[2048];

int yylex(void);
int mode=-1;

void yyerror(const char *s)
{
	fflush(stdout);
	
	if(mode==-1)
		printf("***parsing terminated*** [syntax error]\n");
	else if(mode==0 || mode==1)
		printf("%s\n",s);
		
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
	printf("#pointers_declarations = %d\n",pointer_decls);
	printf("#ifs_without_else = %d\n",ifs_wo_else);
	printf("if-else max-depth = %d\n",((max<0)?0:max));

	return(0);
}
