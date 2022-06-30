#include <stdio.h>
#include "function_pointers.h"

/**
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);


