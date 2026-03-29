#include "parser_diag.h"
#include "parser_debug.h"
#include "lalr_table.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

extern int yylineno;
extern char *yytext;

void parser_diag_init(void)
{
	/* Placeholder for any future initialization */
}

void parser_diag_error(const char *message)
{
	int state;
	
	fflush(stdout);
	state = parser_debug_get_state();
	
	fprintf(stderr, "***parsing terminated*** [syntax error]\n");
	fprintf(stderr, "line %d near '%s' (state %d)\n", yylineno, yytext, state);
	fprintf(stderr, "diagnostic: %s\n", message);
	
	/* Get and print expected tokens for current state */
	lalr_table_get_expected_tokens("y.output", state);
	
	/* Print context-specific hints */
	parser_diag_hint(yytext);
}

void parser_diag_hint(const char *token)
{
	if (!token || !token[0])
	{
		fprintf(stderr, "hint: unexpected end of input; check missing '}', ')', or ';'.\n");
	}
	else if (strcmp(token, "}") == 0)
	{
		fprintf(stderr, "hint: stray or unmatched '}'.\n");
	}
	else if (strcmp(token, ")") == 0)
	{
		fprintf(stderr, "hint: unmatched ')' or malformed expression before ')'.\n");
	}
	else if (strcmp(token, ";") == 0)
	{
		fprintf(stderr, "hint: statement/declaration before ';' appears incomplete.\n");
	}
}
