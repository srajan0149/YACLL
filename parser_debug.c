#include "parser_debug.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

#define MAX_REDUCTIONS 200000
#define MAX_RULES 1024
#define RULE_TEXT_LEN 256

static int reductions[MAX_REDUCTIONS];
static int reductions_count = 0;
static int parser_last_state = -1;
static char rule_texts[MAX_RULES][RULE_TEXT_LEN];
static int derivation_verbose = 1;  /* default: show derivation steps */

/* Trim leading/trailing whitespace */
static void trim(char *s)
{
	char *p = s;
	char *e;
	while (*p && isspace((unsigned char)*p)) p++;
	if (p != s) memmove(s, p, strlen(p) + 1);
	e = s + strlen(s);
	while (e > s && isspace((unsigned char)e[-1])) --e;
	*e = '\0';
}

/* Load rule text mappings from y.output Grammar section */
static void load_rule_texts(const char *path)
{
	FILE *fp = fopen(path, "r");
	char line[1024];
	char current_lhs[128] = "";
	int in_grammar = 0;
	
	if (!fp) return;

	while (fgets(line, sizeof(line), fp))
	{
		char *p = line;
		while (*p && isspace((unsigned char)*p)) p++;
		
		if (!in_grammar)
		{
			if (strncmp(p, "Grammar", 7) == 0) in_grammar = 1;
			continue;
		}
		
		if (strncmp(p, "State ", 6) == 0) break;
		if (!isdigit((unsigned char)*p)) continue;

		{
			int rule = (int)strtol(p, &p, 10);
			char rhs[200];
			
			if (rule < 0 || rule >= MAX_RULES) continue;
			
			while (*p && isspace((unsigned char)*p)) p++;
			if (*p == '|')
			{
				strncpy(rhs, p + 1, sizeof(rhs) - 1);
				rhs[sizeof(rhs) - 1] = '\0';
				trim(rhs);
				snprintf(rule_texts[rule], RULE_TEXT_LEN, "%s -> %s", current_lhs, rhs);
			}
			else
			{
				char *colon = strchr(p, ':');
				if (!colon) continue;
				*colon = '\0';
				strncpy(current_lhs, p, sizeof(current_lhs) - 1);
				current_lhs[sizeof(current_lhs) - 1] = '\0';
				trim(current_lhs);
				strncpy(rhs, colon + 1, sizeof(rhs) - 1);
				rhs[sizeof(rhs) - 1] = '\0';
				trim(rhs);
				snprintf(rule_texts[rule], RULE_TEXT_LEN, "%s -> %s", current_lhs, rhs);
			}
		}
	}
	
	fclose(fp);
}

/* Parser trace hook - called by YYFPRINTF macro */
int parser_trace_printf(FILE *stream, const char *fmt, ...)
{
	char msg[512];
	int state_id, rule_id;
	va_list ap;
	(void)stream;

	va_start(ap, fmt);
	vsnprintf(msg, sizeof(msg), fmt, ap);
	va_end(ap);

	if (sscanf(msg, "Entering state %d", &state_id) == 1)
		parser_last_state = state_id;

	if (sscanf(msg, "Reducing stack by rule %d", &rule_id) == 1)
	{
		if (reductions_count < MAX_REDUCTIONS)
			reductions[reductions_count++] = rule_id;
	}

	return (int)strlen(msg);
}

void parser_debug_init(void)
{
	reductions_count = 0;
	parser_last_state = -1;
	memset(reductions, 0, sizeof(reductions));
	memset(rule_texts, 0, sizeof(rule_texts));
	load_rule_texts("y.output");
}

int parser_debug_get_state(void)
{
	return parser_last_state;
}

void parser_debug_set_derivation_verbose(int enable)
{
	derivation_verbose = enable;
}

void parser_debug_print_derivation(int verbosity)
{
	int i, idx = 1;
	
	if (verbosity == 0)
		return;  /* silent mode */
	
	if (verbosity == 1)
	{
		/* Summary mode: just show count */
		printf("[Parse tree: %d reductions]\n", reductions_count);
		return;
	}
	
	/* verbosity >= 2: full detailed output */
	printf("\n=== Derivation Tree (bottom-up reductions) ===\n");
	for (i = reductions_count - 1; i >= 0; --i, ++idx)
	{
		int r = reductions[i];
		if (r >= 0 && r < MAX_RULES && rule_texts[r][0])
			printf("  %3d. r%-3d %s\n", idx, r, rule_texts[r]);
		else
			printf("  %3d. r%d\n", idx, r);
	}
	printf("==========================================\n");
}

static void dot_escape(FILE *fp, const char *text)
{
	const char *p;
	for (p = text; *p; ++p)
	{
		if (*p == '"' || *p == '\\') fputc('\\', fp);
		if (*p == '\n' || *p == '\r')
			fputc(' ', fp);
		else
			fputc(*p, fp);
	}
}

typedef struct
{
	char label[128];
	int first_child;
	int child_count;
	int expanded;
} DerivationNode;

static int is_nonterminal_label(const char *s)
{
	const char *p;
	if (!s || !s[0]) return 0;
	if (strncmp(s, "$@", 2) == 0) return 1;
	for (p = s; *p; ++p)
		if (islower((unsigned char)*p) || *p == '_') return 1;
	return 0;
}

static int parse_rule_text(const char *rule, char *lhs, char rhs[64][64], int *rhs_count)
{
	char buf[RULE_TEXT_LEN];
	char *arrow;
	char *tok;
	char *save;

	if (!rule || !rule[0]) return 0;
	strncpy(buf, rule, sizeof(buf) - 1);
	buf[sizeof(buf) - 1] = '\0';

	arrow = strstr(buf, "->");
	if (!arrow) return 0;

	*arrow = '\0';
	strncpy(lhs, buf, 127);
	lhs[127] = '\0';
	trim(lhs);

	*rhs_count = 0;
	save = arrow + 2;
	trim(save);
	if (!save[0] || strcmp(save, "\xce\xb5") == 0 || strcmp(save, "epsilon") == 0)
		return 1;

	tok = strtok(save, " \t\r\n");
	while (tok && *rhs_count < 64)
	{
		strncpy(rhs[*rhs_count], tok, 63);
		rhs[*rhs_count][63] = '\0';
		(*rhs_count)++;
		tok = strtok(NULL, " \t\r\n");
	}

	return 1;
}

static int ensure_node_capacity(DerivationNode **nodes, int needed, int *cap)
{
	if (needed <= *cap) return 1;
	while (*cap < needed) *cap *= 2;
	*nodes = (DerivationNode *)realloc(*nodes, (size_t)(*cap) * sizeof(DerivationNode));
	return (*nodes != NULL);
}

static int ensure_int_capacity(int **arr, int needed, int *cap)
{
	if (needed <= *cap) return 1;
	while (*cap < needed) *cap *= 2;
	*arr = (int *)realloc(*arr, (size_t)(*cap) * sizeof(int));
	return (*arr != NULL);
}

static int append_node(DerivationNode **nodes, int *node_count, int *node_cap, const char *label)
{
	DerivationNode *n;
	if (!ensure_node_capacity(nodes, *node_count + 1, node_cap)) return -1;
	n = &(*nodes)[*node_count];
	strncpy(n->label, label, sizeof(n->label) - 1);
	n->label[sizeof(n->label) - 1] = '\0';
	n->first_child = -1;
	n->child_count = 0;
	n->expanded = 0;
	(*node_count)++;
	return *node_count - 1;
}

static int find_unexpanded_lhs(DerivationNode *nodes, int node_count, const char *lhs)
{
	int i;
	for (i = 0; i < node_count; ++i)
		if (!nodes[i].expanded && strcmp(nodes[i].label, lhs) == 0)
			return i;
	return -1;
}

static int expand_node(DerivationNode **nodes, int *node_count, int *node_cap,
	                   int **children, int *child_count, int *child_cap,
	                   int node_id, char rhs[64][64], int rhs_count)
{
	int i;
	if (rhs_count <= 0)
	{
		(*nodes)[node_id].expanded = 1;
		(*nodes)[node_id].first_child = -1;
		(*nodes)[node_id].child_count = 0;
		return 1;
	}

	if (!ensure_int_capacity(children, *child_count + rhs_count, child_cap)) return 0;
	(*nodes)[node_id].first_child = *child_count;
	(*nodes)[node_id].child_count = rhs_count;

	for (i = 0; i < rhs_count; ++i)
	{
		int child_id = append_node(nodes, node_count, node_cap, rhs[i]);
		if (child_id < 0) return 0;
		(*children)[*child_count] = child_id;
		(*child_count)++;
	}
	(*nodes)[node_id].expanded = 1;
	return 1;
}

void parser_debug_export_derivation(const char *dot_path, const char *png_path)
{
	FILE *fp;
	int i, rc;
	char cmd[1024];
	DerivationNode *nodes = NULL;
	int *children = NULL;
	int *roots = NULL;
	int node_count = 0, child_count = 0, root_count = 0;
	int node_cap = 1024, child_cap = 4096, root_cap = 64;
	int first_rule_index = -1;

	if (!dot_path || !dot_path[0] || reductions_count <= 0)
		return;

	nodes = (DerivationNode *)malloc((size_t)node_cap * sizeof(DerivationNode));
	children = (int *)malloc((size_t)child_cap * sizeof(int));
	roots = (int *)malloc((size_t)root_cap * sizeof(int));
	if (!nodes || !children || !roots)
	{
		free(nodes);
		free(children);
		free(roots);
		return;
	}

	for (i = reductions_count - 1; i >= 0; --i)
	{
		int r = reductions[i];
		if (r >= 0 && r < MAX_RULES && rule_texts[r][0])
		{
			first_rule_index = i;
			break;
		}
	}
	if (first_rule_index < 0)
	{
		free(nodes);
		free(children);
		free(roots);
		return;
	}

	for (i = reductions_count - 1; i >= 0; --i)
	{
		int r = reductions[i];
		char lhs[128];
		char rhs[64][64];
		int rhs_count = 0;
		int node_id;

		if (r < 0 || r >= MAX_RULES || !rule_texts[r][0])
			continue;
		if (!parse_rule_text(rule_texts[r], lhs, rhs, &rhs_count))
			continue;

		node_id = find_unexpanded_lhs(nodes, node_count, lhs);
		if (node_id < 0)
		{
			node_id = append_node(&nodes, &node_count, &node_cap, lhs);
			if (node_id < 0) break;
			if (!ensure_int_capacity(&roots, root_count + 1, &root_cap)) break;
			roots[root_count++] = node_id;
		}

		if (!expand_node(&nodes, &node_count, &node_cap,
		               &children, &child_count, &child_cap,
		               node_id, rhs, rhs_count))
			break;
	}

	fp = fopen(dot_path, "w");
	if (!fp)
	{
		free(nodes);
		free(children);
		free(roots);
		return;
	}

	fprintf(fp, "digraph Derivation {\n");
	fprintf(fp, "  rankdir=TB;\n");
	fprintf(fp, "  nodesep=0.35;\n");
	fprintf(fp, "  ranksep=0.45;\n");
	fprintf(fp, "  label=\"Derivation Tree\";\n");
	fprintf(fp, "  labelloc=t;\n\n");

	for (i = 0; i < node_count; ++i)
	{
		fprintf(fp, "  n%d [label=\"", i);
		dot_escape(fp, nodes[i].label);
		if (is_nonterminal_label(nodes[i].label))
			fprintf(fp, "\", shape=box, style=filled, fillcolor=\"#dbeafe\"];\n");
		else
			fprintf(fp, "\", shape=ellipse, style=filled, fillcolor=\"#fef3c7\"];\n");
	}

	for (i = 0; i < node_count; ++i)
	{
		int k;
		for (k = 0; k < nodes[i].child_count; ++k)
		{
			int c = children[nodes[i].first_child + k];
			fprintf(fp, "  n%d -> n%d;\n", i, c);
		}
	}

	fprintf(fp, "}\n");
	fclose(fp);
	free(nodes);
	free(children);
	free(roots);

	if (!png_path || !png_path[0])
		return;

	snprintf(cmd, sizeof(cmd), "command -v dot >/dev/null 2>&1");
	rc = system(cmd);
	if (rc != 0)
		return;

	snprintf(cmd, sizeof(cmd), "dot -Tpng \"%s\" -o \"%s\"", dot_path, png_path);
	(void)system(cmd);
}
