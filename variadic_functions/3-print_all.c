#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_all - function that print anything
 *@format: list of types of arguments passed to function
 *
 *
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;

	va_list list;

	va_start(list, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char*);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
