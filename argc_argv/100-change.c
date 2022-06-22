#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns the minimum number of coins,
 * for changing an amount of money
 * Return: 0 for success, 1 for error
 * @argc: number of arguments
 * @argv: array of arguments
 */

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int i, money, sum;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);
	sum = 0;

	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && money >= 0; i++)
	{
		while (money >= coins[i])
		{
			sum++;
			money -= coins[i];
		}
	}

	printf("%d\n", sum);
	return (0);
}

