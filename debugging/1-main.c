#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");
	/**
	 *        i = 0;  comment why infiniteloop occurs
	 *
	 *	  while (i < 10)
	 *	  {
	 *	  putchar(i); * infiniteloop occurs because i++ missing
	 *	  }
	 */
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
