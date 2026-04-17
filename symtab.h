#ifndef SYMTAB_H
#define SYMTAB_H
#include "icg.h"

void    sym_enter_scope(void);
void    sym_exit_scope(void);
void    sym_declare(const char *name, IcgType type);
IcgType sym_lookup(const char *name);   /* T_UNKNOWN if not found */

#endif
