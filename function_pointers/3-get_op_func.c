#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - function pointer to get the
 * right operating function depending on what 
 * the user slap on keyboard.
 * 
 *
 *
 *
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i; 

	while (ops[i].op)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
