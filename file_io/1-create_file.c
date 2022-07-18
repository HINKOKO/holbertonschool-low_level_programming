#include "main.h"

/**
 *create_file -function that create a file filename
 *@filename: the file to create
 *@text_content: the text to write in the fresh file
 *Return: -1 when things go wrong, 1 for success output
 */

int create_file(const char *filename, char *text_content)
{
	int fd, t, w;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd > 0)
		return (-1);

	if (text_content)
	{
		while (text_content[t])
		{
			w = write(fd, text_content, t);
			t++;
			if (w != t)
				return (-1);
		}
	}
	close(fd);
	return (1);
}





