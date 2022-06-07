#include "main.h"

/**
 * jack_bauer - function that prints every minute of Jack Bauer's day :)
 *
 */

void jack_bauer(void)
{
	int hours = 0;
	int minuts = 0;

	while (hours < 24)
	{
		while (minuts < 60)
		{
			_putchar((hours / 10) + 48);
			_putchar((hours % 10) + 48);
			_putchar(':');
			_putchar((minuts / 10) + 48);
			_putchar((minuts % 10) + 48);
			minuts++;
		}
		hours++;
	}
}
