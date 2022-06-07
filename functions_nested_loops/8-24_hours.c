#include "main.h"

/**
 * jack_bauer - function that prints every minute of Jack Bauer's day :)
 * Return: 
 *
 */

void jack_bauer(void)
{
	int hours = 0;
	int minuts = 0;

	while(hours < 24)
	{
		while(minuts < 60)
		{
			_putchar(hours);
			_putchar(':');
			_putchar(minuts);
			minuts++;
		}
		hours++;
	}
}
