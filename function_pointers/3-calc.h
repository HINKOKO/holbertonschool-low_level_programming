#ifndef __CALC__
#define __CALC__

/**
 * struct op- structure for operations
 * @op: the operator
 * @f: function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif
