#ifndef ICG_H
#define ICG_H

typedef struct { char op[32], arg1[64], arg2[64], result[64]; } Quad;
typedef enum { T_UNKNOWN, T_INT, T_FLOAT, T_STRING } IcgType;

char       *newTemp(void);
int         newLabel(void);
char       *labelStr(int n);
void        icg_set_type(const char *place, IcgType t);
IcgType     icg_type_of(const char *place);
const char *icg_type_name(IcgType t);
void        emit(const char *op, const char *a1, const char *a2, const char *res);
void        printQuads(void);

#endif
