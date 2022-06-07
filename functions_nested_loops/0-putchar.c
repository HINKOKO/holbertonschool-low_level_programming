#include "main.h"

/**
 * main - Print "_putchar" using our function _putchar, included in main.h.
 *
 * Return: 0 (succes).
 */
int main(void)
{
	char text[8] = "_putchar";
	int i = 0;

	while (text[i] != '\0')
	{
		_putchar(text[i++]);
	}
	_putchar('\n');

	return (0);
}
