#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * isnum - check if character in string
 * are exclusively number
 * @a: string to check for baby
 * Return: 0 if one char in string is not a int
 */

int isnum(char *a)
{
	int k;

	for (k = 0; k < a[k]; k++)
	{
		if (!(a[k] >= '0' && a[k] <= '9'))
			return (0);
	}
	return (1);
}
/**
 * main - prints the number of arguments passed into it
 * Return: 0 successfull
 * @argc: argument count
 * @argv: one-dim array of string
 */

int main(int argc, char *argv[])
{
	int sum;
	int i;

	if (argc < 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		if (isnum(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);

	return (0);
}

