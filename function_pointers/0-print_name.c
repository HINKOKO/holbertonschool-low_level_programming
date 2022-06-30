#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print a name using a function pointer
 * void(*f)(char *), calling f like f() or (*f)()
 * @name: name to print
 * @f: pointer to print function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
