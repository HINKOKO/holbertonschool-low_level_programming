#include "main.h"
#define PERMS 0664

/**
 *main - function that imitates the cp function
 *@argc: number of arguments passed to the program
 *@argv: array of arguments
 *Return: 0 means success
 */

int main(int argc, char *argv[])
{
	int fdr, fdw, r, x, y;
	char tamp[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdr = open(argv[1], O_RDONLY);
	if (fdr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fdw = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, PERMS);
	while ((r = read(fdr, tamp, 1024)) > 0)
	{
		if (write(fdw, tamp, r) != r || fdw < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	x = close(fdr);
	y = close(fdw);
	if (x < 0 || y < 0)
	{
		if (x < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdr);
		if (y < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw);
		exit(100);
	}
	return (0);
}
