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

		if (separator == NULL)
			printf("%s", str);
		else if (i == 0)
			printf("%s", str);
		else if (str == NULL)
			printf("(nil)");
		else
			printf("%s%s", separator, str);
	}

	va_end(string);

	printf("\n");
}




