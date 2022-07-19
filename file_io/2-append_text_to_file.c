#include "main.h"

/**
 *append_text_to_file - the name speaks for itself
 *@filename: pointer to the file to be opened and appended
 *@text_content: the text we need to append
 *Return: -1 for error and 1 for success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, s = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[s])
			s++;
		w = write(fd, text_content, s);
		if (w != s)
			return (-1);
	}
	close(fd);
	return (1);
}


