#include "main.h"

/**
 * jack_bauer - function that prints every minute of Jack Bauer's day :)
 *
 */

void jack_bauer(void)
{
	int h = 0, m;
	
	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar((h / 10) + 48);
			_putchar((h % 10) + 48);
			_putchar(':');
			_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
			_putchar('\n');
			m++;
		}
	h++;
	}
}
