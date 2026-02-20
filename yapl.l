%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"

extern char buff[2048];
extern int mode;
extern void yyerror(const char *);  /* prints grammar violation message */

extern int sym_type(const char *);  /* returns type from symbol table */

#define sym_type(identifier) IDENTIFIER /* with no symbol table, fake it */

static void comment(void);
static int check_type(void);
%}

O   [0-7]
D   [0-9]
NZ  [1-9]
DU  {D}({D}|_)*
L   [a-zA-Z_]
A   [a-zA-Z_0-9]
H   [a-fA-F0-9]
HP  (0[xX])
E   ([Ee][+-]?{D}+)
P   ([Pp][+-]?{D}+)
FS  (f|F|l|L)
IS  (((u|U)(l|L|ll|LL)?)|((l|L|ll|LL)(u|U)?))
CP  (u|U|L)
SP  (u8|u|U|L)
ES  (\\(['"\?\\abfnrtv]|[0-7]{1,3}|x[a-fA-F0-9]+))
WS  [ \t\v\n\f]

%option yylineno

%%
"/*"                                    { comment(); }
"//".*                                  { }

"break"                                 { return(BREAK); }
"bool"                                  { return(BOOL); }
"case"                                  { return(CASE); }
"char"                                  { return(CHAR); }
"const"                                 { return(CONST); }
"continue"                              { return(CONTINUE); }
"default"                               { return(DEFAULT); }
"do"                                    { return(DO); }
"double"                                { return(DOUBLE); }
"else"                                  { return(ELSE); }
"extern"                                { return(EXTERN); }
"fp"                                    { return(FP); }
"text"                                  { return(TEXT); }
"for"                                   { return(FOR); }
"if"                                    { return(IF); }
"int"                                   { return(INT); }
"long"                                  { return(LONG); }
"return"                                { return(RETURN); }
"short"                                 { return(SHORT); }
"sizeof"                                { return(SIZEOF); }
"struct"                                { return(STRUCT); }
"switch"                                { return(SWITCH); }
"void"                                  { return(VOID); }
"while"                                 { return(WHILE); }
"tensor"                                { return(TENSOR); }
"axis"                                  { return(AXIS); }
"in"                                    { return(IN); }

{L}{A}*                                 { return check_type(); }

{DU}                                    {
                                            char buf[256];
                                            int j = 0;
                                            for (int i = 0; yytext[i]; i++) {
                                                if (yytext[i] != '_')
                                                    buf[j++] = yytext[i];
                                            }
                                            buf[j] = '\0';
                                            yylval.val = atoi(buf);
                                            return I_CONSTANT;
                                        }

{HP}{H}+{IS}?                           { return I_CONSTANT; }
{NZ}{D}*{IS}?                           { return I_CONSTANT; }
"0"{O}*{IS}?                            { return I_CONSTANT; }
{CP}?"'"([^'\\\n]|{ES})+"'"             { return I_CONSTANT; }

{DU}"."{DU}                             {
                                            char buf[256];
                                            int j = 0;
                                            for (int i = 0; yytext[i]; i++) {
                                                if (yytext[i] != '_')
                                                    buf[j++] = yytext[i];
                                            }
                                            buf[j] = '\0';
                                            yylval.val = (int)atof(buf);
                                            return F_CONSTANT;
                                        }

{D}+{E}{FS}?                            { return F_CONSTANT; }
{D}*"."{D}+{E}?{FS}?                    { return F_CONSTANT; }
{D}+"."{E}?{FS}?                        { return F_CONSTANT; }
{HP}{H}+{P}{FS}?                        { return F_CONSTANT; }
{HP}{H}*"."{H}+{P}{FS}?                 { return F_CONSTANT; }
{HP}{H}+"."{P}{FS}?                     { return F_CONSTANT; }

({SP}?\"([^"\\\n]|{ES})*\"{WS}*)+       { return STRING_LITERAL; }

"<=>"                                   { return TH_OP; }
"++"                                    { return INC_OP; }
"--"                                    { return DEC_OP; }
"->"                                    { return PTR_OP; }
"&&"                                    { return AND_OP; }
"||"                                    { return OR_OP; }
"<="                                    { return LE_OP; }
">="                                    { return GE_OP; }
"=="                                    { return EQ_OP; }
"!="                                    { return NE_OP; }
";"                                     { return ';'; }
("{"|"<%")                              { return '{'; }
("}"|"%>")                              { return '}'; }
","                                     { return ','; }
":"                                     { return ':'; }
"="                                     { return '='; }
"("                                     { return '('; }
")"                                     { return ')'; }
("["|"<:")                              { return '['; }
("]"|":>")                              { return ']'; }
"."                                     { return '.'; }
"&"                                     { return '&'; }
"!"                                     { return '!'; }
"~"                                     { return '~'; }
"-"                                     { return '-'; }
"+"                                     { return '+'; }
"*"                                     { return '*'; }
"/"                                     { return '/'; }
"%"                                     { return '%'; }
"<"                                     { return '<'; }
">"                                     { return '>'; }
"^"                                     { return '^'; }
"|"                                     { return '|'; }
"?"                                     { return '?'; }
".+"                                    { return DOT_ADD; }
".-"                                    { return DOT_SUB; }
".*"                                    { return DOT_MUL; }
"./"                                    { return DOT_DIV; }
"@*"                                    { return AT_MUL; }
"@"                                     { return AT; }

"`"                                     { return BACKTICK; }
"..."                                   { return ELLIPSIS; }

{WS}+                                   { }

.                                       { }

%%

int yywrap(void)
{
    return 1;
}

static void comment(void)
{
    int c;

    while ((c = input()) != 0)
        if (c == '*')
        {
            while ((c = input()) == '*')
                ;

            if (c == '/')
                return;

            if (c == 0)
                break;
        }

    sprintf(buff,"***lexing terminated*** [lexer error]: ill-formed comment");
    mode = 0;
    yyerror(buff);
}

static int check_type(void)
{
    switch (sym_type(yytext))
    {
        default:
            return IDENTIFIER;
    }
}
