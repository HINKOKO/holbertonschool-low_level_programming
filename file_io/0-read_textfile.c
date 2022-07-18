#include "main.h"

/**
 *read_textfile - function that reads a textfile
 *and prints to std output
 *@filename: pointer to the file to be read
 *@letters: number of letters to read and print
 *Return: 0 when error occurs, otherwise the number
 *of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	r = read(fd, buf, letters);
	if (r < 0)
	{
		free(buf);
		return (0);
	}
	buf[r] = '\0';

	close(fd);

	w = write(STDOUT_FILENO, buf, r);
	if (w < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (w);
}
