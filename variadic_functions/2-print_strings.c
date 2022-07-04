#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints the strings, followed by newline
 * @separator: separator between the strings
 * @n: number of strings//arguments
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list string;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char*);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
