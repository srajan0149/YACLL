#ifndef PARSER_DEBUG_H
#define PARSER_DEBUG_H

#include <stdio.h>

/* Initialize parser debugging - call before parsing */
void parser_debug_init(void);

/* Get the current parser state (set during parsing) */
int parser_debug_get_state(void);

/* Print derivation tree in reverse (bottom-up reductions)
 * Verbosity: 0 = silent, 1 = summary (count only), 2 = full (detailed steps) */
void parser_debug_print_derivation(int verbosity);

/* Enable/disable verbose derivation output */
void parser_debug_set_derivation_verbose(int enable);

/* Export derivation to Graphviz DOT and optionally PNG */
void parser_debug_export_derivation(const char *dot_path, const char *png_path);

#endif /* PARSER_DEBUG_H */
