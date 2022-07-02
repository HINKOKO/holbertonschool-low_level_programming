#include <stdio.h>
#include <stdlib.h>
/**
 *main - print the opcode of its own function
 *@argc: nmbr of arguments
 *@argv: array of arguments
 *Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	array = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		printf("%02xHH\n", array[i]);
	}
	return (0);
}






