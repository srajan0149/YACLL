#include "icg.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ── quad table ─────────────────────────────────────────────── */
#define MAX_QUADS 4096
static Quad quads[MAX_QUADS];
static int  qcount=0, tcnt=0, lcnt=0;

char *newTemp(void)   { char *s=malloc(16); sprintf(s,"t%d",++tcnt); return s; }
int   newLabel(void)  { return ++lcnt; }
char *labelStr(int n) { char *s=malloc(16); sprintf(s,"L%d",n); return s; }

/* ── type map ───────────────────────────────────────────────── */
#define MAX_TYPES 4096
static struct { char name[64]; IcgType type; } tmap[MAX_TYPES];
static int tmap_cnt = 0;

void icg_set_type(const char *place, IcgType t) {
    if (!place || !*place) return;
    for (int i=0; i<tmap_cnt; i++)
        if (!strncmp(tmap[i].name, place, 63)) { tmap[i].type = t; return; }
    if (tmap_cnt < MAX_TYPES) {
        snprintf(tmap[tmap_cnt].name, 64, "%s", place);
        tmap[tmap_cnt++].type = t;
    }
}

IcgType icg_type_of(const char *place) {
    if (!place || !*place) return T_UNKNOWN;
    for (int i=0; i<tmap_cnt; i++)
        if (!strncmp(tmap[i].name, place, 63)) return tmap[i].type;
    return T_UNKNOWN;
}

const char *icg_type_name(IcgType t) {
    switch(t) {
        case T_INT:    return "int";
        case T_FLOAT:  return "float";
        case T_STRING: return "string";
        default:       return "unknown";
    }
}

/* ── type helpers ───────────────────────────────────────────── */
static int is_numeric(IcgType t) { return t == T_INT || t == T_FLOAT || t == T_UNKNOWN; }

/* Widening: int+float → float; unknown stays unknown */
static IcgType result_type(IcgType a, IcgType b) {
    if (a == T_STRING || b == T_STRING) return T_UNKNOWN; /* error case */
    if (a == T_FLOAT  || b == T_FLOAT)  return T_FLOAT;
    if (a == T_INT    || b == T_INT)    return T_INT;
    return T_UNKNOWN;
}

/* ── emit with type checking ────────────────────────────────── */
void emit(const char *op, const char *a1, const char *a2, const char *res) {
    if (qcount >= MAX_QUADS) { fprintf(stderr,"ICG error: quad table overflow\n"); return; }

    /* Arithmetic ops: reject string operands, detect div-by-zero */
    int arith = (!strcmp(op,"+") || !strcmp(op,"-") || !strcmp(op,"*") ||
                 !strcmp(op,"/") || !strcmp(op,"%") || !strcmp(op,"minus") ||
                 !strcmp(op,".*") || !strcmp(op,"./") || !strcmp(op,".+") || !strcmp(op,".-"));

    if (arith) {
        IcgType t1 = icg_type_of(a1);
        IcgType t2 = a2 && *a2 ? icg_type_of(a2) : T_UNKNOWN;

        /* Type mismatch: string in arithmetic */
        if (t1 == T_STRING || t2 == T_STRING) {
            fprintf(stderr,
                "ICG Error: invalid operand type in '%s': cannot apply arithmetic to '%s' and '%s'\n",
                op, icg_type_name(t1), icg_type_name(t2));
            if (res && *res) icg_set_type(res, T_UNKNOWN);
            return; /* skip the bad quad */
        }

        /* Widening coercion note */
        if ((t1 == T_INT && t2 == T_FLOAT) || (t1 == T_FLOAT && t2 == T_INT))
            fprintf(stderr,
                "ICG Note: implicit widening coercion in '%s': int promoted to float\n", op);

        /* Division/modulo by constant zero */
        if ((!strcmp(op,"/") || !strcmp(op,"%")) && a2 && !strcmp(a2,"0"))
            fprintf(stderr, "ICG Warning: division by constant zero in '%s'\n", op);

        /* Infer result type */
        if (res && *res) icg_set_type(res, result_type(t1, t2));
    }

    /* Assignment: propagate type */
    if (!strcmp(op,"=") && a1 && *a1 && res && *res)
        icg_set_type(res, icg_type_of(a1));

    /* Build quad */
    Quad *q = &quads[qcount++];
    snprintf(q->op,    32, "%s", op  ? op  : "");
    snprintf(q->arg1,  64, "%s", a1  ? a1  : "");
    snprintf(q->arg2,  64, "%s", a2  ? a2  : "");
    snprintf(q->result,64, "%s", res ? res : "");
}

/* ── print ──────────────────────────────────────────────────── */
void printQuads(void) {
    if (!qcount) return;
    printf("\n=== Intermediate Code (Quadruples) ===\n");
    printf("%-6s | %-10s | %-14s | %-14s | %-14s\n",
           "Index","op","arg1","arg2","result");
    printf("-------+------------+----------------+----------------+----------------\n");
    for (int i=0; i<qcount; i++)
        printf("%-6d | %-10s | %-14s | %-14s | %-14s\n",
               i, quads[i].op, quads[i].arg1, quads[i].arg2, quads[i].result);
}
