#include "main.h"
#include <stdio.h>

int mul(int a, int b);
int _atoi(char *s);
/**
 * main - prints the number of arguments passed into it
 * Return: 0 successfull
 * @argc: argument count
 * @argv: one-dim array of string
 */

int main(int argc, char *argv[])
{
	int n1, n2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);

	prod = mul(n1, n2);

	printf("%d\n", prod);

	return (0);
}
/**
 * mul - multiply two integer
 * @a: int to multiply with b
 * @b: int to multiply with a
 * Return: return product
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * _atoi - transform a string to integer
 * @s: the string to "translate"
 * Return: the converted string
 */

int _atoi(char *s)
{
	/**
	 *initialize result
	 *initialize sign as positive
	 */
	unsigned int res = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			res = (res * 10) + (*s - '0');
		else if (res > 0)
			break;
	} while (*s++);

	return (res * sign);
}
