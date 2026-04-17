#include "symtab.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define MAX_DEPTH  64
#define HASH_SIZE  256

typedef struct Entry { char name[64]; IcgType type; struct Entry *next; } Entry;
typedef struct { Entry *buckets[HASH_SIZE]; } Scope;

static Scope scopes[MAX_DEPTH];
static int   depth = 0;

static unsigned hash(const char *s) {
    unsigned h = 5381;
    while (*s) h = h * 33 ^ (unsigned char)*s++;
    return h % HASH_SIZE;
}

void sym_enter_scope(void) {
    if (depth >= MAX_DEPTH) { fprintf(stderr,"symtab: scope overflow\n"); return; }
    memset(&scopes[depth++], 0, sizeof(Scope));
}

void sym_exit_scope(void) {
    if (depth == 0) return;
    Scope *s = &scopes[--depth];
    for (int i = 0; i < HASH_SIZE; i++) {
        Entry *e = s->buckets[i];
        while (e) { Entry *nx = e->next; free(e); e = nx; }
        s->buckets[i] = NULL;
    }
}

void sym_declare(const char *name, IcgType type) {
    if (!name || !*name || depth == 0) return;
    Scope *s = &scopes[depth - 1];
    unsigned h = hash(name);
    for (Entry *e = s->buckets[h]; e; e = e->next)
        if (!strncmp(e->name, name, 63)) { e->type = type; return; } /* update */
    Entry *e = calloc(1, sizeof(Entry));
    snprintf(e->name, 64, "%s", name);
    e->type = type;
    e->next = s->buckets[h];
    s->buckets[h] = e;
}

IcgType sym_lookup(const char *name) {
    if (!name || !*name) return T_UNKNOWN;
    unsigned h = hash(name);
    for (int i = depth - 1; i >= 0; i--)   /* inner→outer scope */
        for (Entry *e = scopes[i].buckets[h]; e; e = e->next)
            if (!strncmp(e->name, name, 63)) return e->type;
    return T_UNKNOWN;
}
