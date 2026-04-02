#include "lalr_table.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define MAX_STATES 1024
#define MAX_SYMBOLS 256
#define CELL_WIDTH 16

static int add_symbol(char syms[][64], int *count, const char *sym)
{
	int i;
	for (i = 0; i < *count; ++i)
		if (strcmp(syms[i], sym) == 0) return i;
	if (*count >= MAX_SYMBOLS) return -1;
	strncpy(syms[*count], sym, 63);
	syms[*count][63] = '\0';
	return (*count)++;
}

static void put_cell(char table[MAX_STATES][MAX_SYMBOLS][CELL_WIDTH], 
                     int st, int col, const char *val)
{
	if (st < 0 || st >= MAX_STATES || col < 0 || col >= MAX_SYMBOLS) return;
	if (!table[st][col][0])
	{
		strncpy(table[st][col], val, CELL_WIDTH - 1);
		table[st][col][CELL_WIDTH - 1] = '\0';
	}
	else if (strcmp(table[st][col], val) != 0)
	{
		char merged[CELL_WIDTH];
		snprintf(merged, sizeof(merged), "%s/%s", table[st][col], val);
		strncpy(table[st][col], merged, CELL_WIDTH - 1);
		table[st][col][CELL_WIDTH - 1] = '\0';
	}
}

static void print_matrix(const char *title, 
                         char syms[][64], int nsyms,
                         char table[MAX_STATES][MAX_SYMBOLS][CELL_WIDTH], 
                         int max_state)
{
	int st, i;
	
	printf("\n%s\n", title);
	printf("%-7s", "State");
	for (i = 0; i < nsyms; ++i) printf("| %-10s", syms[i]);
	printf("\n");
	
	for (st = 0; st <= max_state; ++st)
	{
		int nonempty = 0;
		for (i = 0; i < nsyms; ++i)
			if (table[st][i][0]) { nonempty = 1; break; }
		if (!nonempty) continue;
		
		printf("%-7d", st);
		for (i = 0; i < nsyms; ++i)
			printf("| %-10s", table[st][i][0] ? table[st][i] : "");
		printf("\n");
	}
}

static void parse_lalr_tables(const char *y_output_path,
	                          char action_syms[MAX_SYMBOLS][64], int *action_count,
	                          char goto_syms[MAX_SYMBOLS][64], int *goto_count,
	                          char action_table[MAX_STATES][MAX_SYMBOLS][CELL_WIDTH],
	                          char goto_table[MAX_STATES][MAX_SYMBOLS][CELL_WIDTH],
	                          int *max_state)
{
	FILE *fp = fopen(y_output_path, "r");
	char line[1024], sym[64];
	int current_state = -1;

	*action_count = 0;
	*goto_count = 0;
	*max_state = -1;
	memset(action_syms, 0, sizeof(char) * MAX_SYMBOLS * 64);
	memset(goto_syms, 0, sizeof(char) * MAX_SYMBOLS * 64);
	memset(action_table, 0, sizeof(char) * MAX_STATES * MAX_SYMBOLS * CELL_WIDTH);
	memset(goto_table, 0, sizeof(char) * MAX_STATES * MAX_SYMBOLS * CELL_WIDTH);

	if (!fp)
		return;

	while (fgets(line, sizeof(line), fp))
	{
		int n, col;
		if (sscanf(line, "State %d", &n) == 1)
		{
			current_state = n;
			if (n > *max_state) *max_state = n;
			continue;
		}
		if (current_state < 0) continue;

		if (strstr(line, "shift, and go to state") &&
		    sscanf(line, " %63s shift, and go to state %d", sym, &n) == 2)
		{
			char a[16];
			if (isdigit((unsigned char)sym[0]) || sym[0] == '[') continue;
			snprintf(a, sizeof(a), "s%d", n);
			col = add_symbol(action_syms, action_count, sym);
			put_cell(action_table, current_state, col, a);
		}
		else if (strstr(line, "reduce using rule") &&
		         sscanf(line, " %63s reduce using rule %d", sym, &n) == 2)
		{
			char a[16];
			if (isdigit((unsigned char)sym[0]) || sym[0] == '[') continue;
			snprintf(a, sizeof(a), "r%d", n);
			col = add_symbol(action_syms, action_count, sym);
			put_cell(action_table, current_state, col, a);
		}
		else if (strstr(line, "go to state") &&
		         sscanf(line, " %63s go to state %d", sym, &n) == 2)
		{
			char g[16];
			if (isdigit((unsigned char)sym[0]) || sym[0] == '[') continue;
			snprintf(g, sizeof(g), "%d", n);
			col = add_symbol(goto_syms, goto_count, sym);
			put_cell(goto_table, current_state, col, g);
		}
		else if (strstr(line, "accept") && !strstr(line, "$accept:") &&
		         !strchr(line, ':') && sscanf(line, " %63s", sym) == 1)
		{
			if (isdigit((unsigned char)sym[0]) || sym[0] == '[' ||
			    strcmp(sym, "Grammar") == 0) continue;
			col = add_symbol(action_syms, action_count, sym);
			put_cell(action_table, current_state, col, "acc");
		}
	}

	fclose(fp);
}

static void csv_write_cell(FILE *fp, const char *text)
{
	const char *p;
	fputc('"', fp);
	for (p = text; *p; ++p)
	{
		if (*p == '"') fputc('"', fp);
		fputc(*p, fp);
	}
	fputc('"', fp);
}

static void format_symbol_label(const char *src, char *dst, size_t dst_size)
{
	size_t n;
	if (!src || !src[0])
	{
		dst[0] = '\0';
		return;
	}

	if (strcmp(src, "$end") == 0)
	{
		strncpy(dst, "$", dst_size - 1);
		dst[dst_size - 1] = '\0';
		return;
	}

	n = strlen(src);
	if (n >= 2 && src[0] == '\'' && src[n - 1] == '\'')
	{
		/* Convert quoted terminals like ';' to ; for cleaner headers */
		size_t copy_len = (n - 2 < dst_size - 1) ? (n - 2) : (dst_size - 1);
		memcpy(dst, src + 1, copy_len);
		dst[copy_len] = '\0';
		return;
	}

	strncpy(dst, src, dst_size - 1);
	dst[dst_size - 1] = '\0';
}

static void export_combined_csv(const char *path,
	                            char action_syms[][64], int action_count,
	                            char goto_syms[][64], int goto_count,
	                            char action_table[MAX_STATES][MAX_SYMBOLS][CELL_WIDTH],
	                            char goto_table[MAX_STATES][MAX_SYMBOLS][CELL_WIDTH],
	                            int max_state)
{
	FILE *out = fopen(path, "w");
	int i, st;
	if (!out) return;

	/* Header row 1: sections */
	csv_write_cell(out, "Section");
	for (i = 0; i < action_count; ++i)
	{
		fputc(',', out);
		csv_write_cell(out, "ACTION");
	}
	for (i = 0; i < goto_count; ++i)
	{
		fputc(',', out);
		csv_write_cell(out, "GOTO");
	}
	fputc('\n', out);

	/* Header row 2: symbols */
	csv_write_cell(out, "State");
	for (i = 0; i < action_count; ++i)
	{
		char label[64];
		format_symbol_label(action_syms[i], label, sizeof(label));
		fputc(',', out);
		csv_write_cell(out, label);
	}
	for (i = 0; i < goto_count; ++i)
	{
		char label[64];
		format_symbol_label(goto_syms[i], label, sizeof(label));
		fputc(',', out);
		csv_write_cell(out, label);
	}
	fputc('\n', out);

	for (st = 0; st <= max_state; ++st)
	{
		int nonempty = 0;
		for (i = 0; i < action_count; ++i)
			if (action_table[st][i][0]) { nonempty = 1; break; }
		if (!nonempty)
			for (i = 0; i < goto_count; ++i)
				if (goto_table[st][i][0]) { nonempty = 1; break; }
		if (!nonempty) continue;

		fprintf(out, "%d", st);
		for (i = 0; i < action_count; ++i)
		{
			fputc(',', out);
			csv_write_cell(out, action_table[st][i][0] ? action_table[st][i] : "");
		}
		for (i = 0; i < goto_count; ++i)
		{
			fputc(',', out);
			csv_write_cell(out, goto_table[st][i][0] ? goto_table[st][i] : "");
		}
		fputc('\n', out);
	}

	fclose(out);
}

void lalr_table_print(const char *y_output_path)
{
	int max_state = -1;
	int action_count = 0, goto_count = 0;
	char action_syms[MAX_SYMBOLS][64] = {{0}};
	char goto_syms[MAX_SYMBOLS][64] = {{0}};
	static char action_table[MAX_STATES][MAX_SYMBOLS][CELL_WIDTH];
	static char goto_table[MAX_STATES][MAX_SYMBOLS][CELL_WIDTH];

	parse_lalr_tables(y_output_path,
		              action_syms, &action_count,
		              goto_syms, &goto_count,
		              action_table, goto_table,
		              &max_state);

	if (max_state < 0)
	{
		printf("\nLALR(1) table not available: cannot open %s\n", y_output_path);
		return;
	}

	printf("\n=== LALR(1) Parsing Table ===\n");
	print_matrix("ACTION (terminals)", action_syms, action_count, action_table, max_state);
	print_matrix("GOTO (non-terminals)", goto_syms, goto_count, goto_table, max_state);
	printf("=============================\n");
}

void lalr_table_export_csv(const char *y_output_path,
	                       const char *table_csv_path)
{
	int max_state = -1;
	int action_count = 0, goto_count = 0;
	char action_syms[MAX_SYMBOLS][64] = {{0}};
	char goto_syms[MAX_SYMBOLS][64] = {{0}};
	static char action_table[MAX_STATES][MAX_SYMBOLS][CELL_WIDTH];
	static char goto_table[MAX_STATES][MAX_SYMBOLS][CELL_WIDTH];

	parse_lalr_tables(y_output_path,
		              action_syms, &action_count,
		              goto_syms, &goto_count,
		              action_table, goto_table,
		              &max_state);

	if (max_state < 0) return;
	export_combined_csv(table_csv_path,
		            action_syms, action_count,
		            goto_syms, goto_count,
		            action_table, goto_table,
		            max_state);
}

void lalr_table_get_expected_tokens(const char *y_output_path, int state)
{
	FILE *fp;
	char line[1024], sym[64];
	int current_state = -1, expected_count = 0;
	char expected[16][64];
	int i;

	if (state < 0) return;
	
	fp = fopen(y_output_path, "r");
	if (!fp) return;

	while (fgets(line, sizeof(line), fp))
	{
		int n;
		if (sscanf(line, "State %d", &n) == 1)
		{
			if (current_state == state) break;
			current_state = n;
			continue;
		}
		if (current_state != state) continue;

		if ((strstr(line, "shift, and go to state") || strstr(line, "reduce using rule")) && 
		    sscanf(line, " %63s", sym) == 1)
		{
			if (strcmp(sym, "$default") == 0 || isdigit((unsigned char)sym[0]) || sym[0] == '[') 
				continue;
			
			for (i = 0; i < expected_count; ++i)
				if (strcmp(expected[i], sym) == 0) break;
			
			if (i == expected_count && expected_count < 16)
			{
				strncpy(expected[expected_count], sym, 63);
				expected[expected_count][63] = '\0';
				expected_count++;
			}
		}
	}
	fclose(fp);

	if (expected_count > 0)
	{
		fprintf(stderr, "expected: ");
		for (i = 0; i < expected_count; ++i)
			fprintf(stderr, "%s%s", expected[i], (i + 1 < expected_count) ? ", " : "\n");
	}
}
