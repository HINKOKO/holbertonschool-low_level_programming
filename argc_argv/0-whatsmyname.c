#include "main.h"
#include <stdio.h>

/**
 * main - program that print it's own name
 * @argc: argument count, (unused here- chouff the syntax, useful)
 * contains number ,of arguments passed to the program
 * @argv: argument vector, one-dim array of string
 * Return: 0 for success
 *
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
