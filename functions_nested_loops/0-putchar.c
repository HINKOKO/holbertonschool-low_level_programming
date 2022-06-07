#include <main.h>

/**
 * main - print "_putchar" using function putchar, included in main.h
 * Return: 0 for success.
 */

int main(void)

	char text[8] = "_putchar";
	int i = 0;

	while (text[i] != '\0')
{
	_putchar(text[i++]);
}
putchar('\n');

return (0);
}
