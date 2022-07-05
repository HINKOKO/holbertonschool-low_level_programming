#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_c - print a char
 *@c: the character to print
 */

void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 *print_i - print an integer
 *@i: integer to print
 */
void print_i(va_list i)
{
	printf("%i", va_arg(i, int));
}
/**
 *print_f - print a float num
 *@f: the float to print
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 *print_s - print a string
 *@s: string to print
 */
void print_s(va_list s)
{
	char *str = va_arg(s, char*);

	if (str == NULL)
		printf("(nil)");
	printf("%s", str);
}
/**
 *print_all - prints anything whatever cifs
 *@format: the format to check and print
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list list;

	prt pick[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
		{0, NULL},
	};

	va_start(list, format);


	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (pick[j].c != 0)
		{
			if (pick[j].c == format[i])
			{
				pick[j].f(list);
				if (format[i + 1])
				{
					printf(", ");
				}
				j++;
			}
		}
		i++;
	}
}
