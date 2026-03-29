#ifndef LALR_TABLE_H
#define LALR_TABLE_H

#include <stdio.h>

/* Print LALR(1) parsing table from y.output in lecture-style format */
void lalr_table_print(const char *y_output_path);

/* Export one combined ACTION+GOTO parsing table to CSV */
void lalr_table_export_csv(const char *y_output_path,
	                       const char *table_csv_path);

/* Extract expected tokens for a given parser state (used for error recovery) */
void lalr_table_get_expected_tokens(const char *y_output_path, int state);

#endif /* LALR_TABLE_H */
