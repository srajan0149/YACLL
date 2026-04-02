#ifndef PARSER_DIAG_H
#define PARSER_DIAG_H

/* Initialize diagnostics module */
void parser_diag_init(void);

/* Print parse error diagnostic with hints and expected tokens */
void parser_diag_error(const char *message);

/* Print helpful hints based on context */
void parser_diag_hint(const char *token);

#endif /* PARSER_DIAG_H */
