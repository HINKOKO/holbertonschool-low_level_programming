#include <stdio.h>
#include <stdlib.h>

/**
 * print_op - print the opcode
 * @a: pointer/adress to main function below
 * @n: number of bytes to print
 * Return: void
 */

print_op(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%02hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}
/**
 * main - print opcode of its own function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 for success end
 */
int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_op((char *)main, n);
	return (0);
}

