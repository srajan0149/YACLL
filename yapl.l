O   [0-7]           // octal digit
D   [0-9]           // decimal digit
NZ  [1-9]           // non zero digit
DU  {D}({D}|_)*     // digit or digit separator
L   [a-zA-Z_]       // identifier first letter
A   [a-zA-Z_0-9]    // identifier letters
H   [a-fA-F0-9]     // hexadecimal digit
HP  (0[xX])         // hexadecimal start
E   ([Ee][+-]?{D}+) // exponent part like 1e-5
P   ([Pp][+-]?{D}+) // hexadecimal floating-point literal Idk, ask chatgpt
FS  (f|F|l|L)       // for floating/long literals like 156L
IS  (((u|U)(l|L|ll|LL)?)|((l|L|ll|LL)(u|U)?))       // unsigned long long
CP  (u|U|L)         // unsigned or long
SP  (u8|u|U|L)      // u8 as a string literal prefix
ES  (\\(['"\?\\abfnrtv]|[0-7]{1,3}|x[a-fA-F0-9]+))  // escape sequences
WS  [ \t\v\n\f]     // whitespaces

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

%%
"/*"                                    { comment(); }
"//".*                                    { /* consume //-comment */ }

"break"					{ return(BREAK); }
"case"					{ return(CASE); }
"char"					{ return(CHAR); }
"continue"				{ return(CONTINUE); }
"default"				{ return(DEFAULT); }
"do"					{ return(DO); }
"double"				{ return(DOUBLE); }
"else"					{ return(ELSE); }
"extern"				{ return(EXTERN); }
"fp"					{ return(FP); }
"text"                  {return(TEXT);}
"for"					{ return(FOR); }
"if"					{ return(IF); }
"int"					{ return(INT); }
"long"					{ return(LONG); }
"return"				{ return(RETURN); }
"short"					{ return(SHORT); }
"sizeof"				{ return(SIZEOF); }
"struct"				{ return(STRUCT); }
"switch"				{ return(SWITCH); }
"void"					{ return(VOID); }
"while"					{ return(WHILE); }
"tensor"                {return(TENSOR);}
"item"                  {return (ITEM);}
"axis"                  {return (AXIS);}
"in"                    {return (IN);}

{L}{A}*					{ return check_type(); }
{DU}                {
                        char buf[256];
                        int j = 0;
                        for (int i = 0; yytext[i]; i++) {
                            if (yytext[i] != '_')
                                buf[j++] = yytext[i];
                        }
                        buf[j] = '\0';

                        yylval.intval = atoi(buf);
                        return I_CONSTANT;
                    }
{HP}{H}+{IS}?				{ return I_CONSTANT; }
{NZ}{D}*{IS}?				{ return I_CONSTANT; }
"0"{O}*{IS}?				{ return I_CONSTANT; }
{CP}?"'"([^'\\\n]|{ES})+"'"		{ return I_CONSTANT; }

{DU}"."{DU}             {
                            char buf[256];
                            int j = 0;
                            for (int i = 0; yytext[i]; i++) {
                                if (yytext[i] != '_')
                                    buf[j++] = yytext[i];
                            }
                            buf[j] = '\0';

                            yylval.fval = atof(buf);
                            return F_CONSTANT;
                        }
{D}+{E}{FS}?				{ return F_CONSTANT; }
{D}*"."{D}+{E}?{FS}?			{ return F_CONSTANT; }
{D}+"."{E}?{FS}?			{ return F_CONSTANT; }
{HP}{H}+{P}{FS}?			{ return F_CONSTANT; }
{HP}{H}*"."{H}+{P}{FS}?			{ return F_CONSTANT; }
{HP}{H}+"."{P}{FS}?			{ return F_CONSTANT; }

({SP}?\"([^"\\\n]|{ES})*\"{WS}*)+	{ return STRING_LITERAL; }

"<=>"					{ return TH_OP; }
"++"					{ return INC_OP; }
"--"					{ return DEC_OP; }
"->"					{ return PTR_OP; }
"&&"					{ return AND_OP; }
"||"					{ return OR_OP; }
"<="					{ return LE_OP; }
">="					{ return GE_OP; }
"=="					{ return EQ_OP; }
"!="					{ return NE_OP; }
";"					{ return ';'; }
("{"|"<%")				{ return '{'; }
("}"|"%>")				{ return '}'; }
","					{ return ','; }
":"					{ return ':'; }
"="					{ return '='; }
"("					{ return '('; }
")"					{ return ')'; }
("["|"<:")				{ return '['; }
("]"|":>")				{ return ']'; }
"."					{ return '.'; }
"&"					{ return '&'; }
"!"					{ return '!'; }
"~"					{ return '~'; }
"-"					{ return '-'; }
"+"					{ return '+'; }
"*"					{ return '*'; }
"/"					{ return '/'; }
"%"					{ return '%'; }
"<"					{ return '<'; }
">"					{ return '>'; }
"^"					{ return '^'; }
"|"					{ return '|'; }
"?"					{ return '?'; }
".+"                {return (DOT_ADD);}
".-"                {return (DOT_SUB);}
".*"                {return (DOT_MUL);}
"./"                {return (DOT_DIV);}
"@*"                {return (AT_MUL);}
"@"                 {return (AT);}
"'"                 { return (APOSTROPHE); }

{WS}+					{ /* whitespace separates tokens */ }
"..."      {return (ELLIPSIS);}

.					{ /* discard bad characters */ }

%%

int yywrap(void)        /* called at end of input */
{
    return 1;           /* terminate now */
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
	mode=0;
    yyerror(buff);
}

static int check_type(void)
{
    switch (sym_type(yytext))
    {
        default:                          /* includes undefined */
        return IDENTIFIER;
    }
}
