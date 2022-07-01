#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * main - performs operation asked by user
 * @argc: number of arguments, have to be 4 exactly
 * @argv: array of pointers to arguments
 * Return: 0 for success exit.
 */

int main(int argc, char *argv[])
{
	int n1, n2, result;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = f(n1, n2);

	printf("%d\n", result);

	return (0);
}
