#include <stdarg.h>
#include "variadic_functions.h"

/**
 *
 *
 *
 *
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list(num);

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(num, int));
		else
			printf("%s%d", separator, va_arg(num, int));
	}

	va_end(num);
	printf("\n");
}


