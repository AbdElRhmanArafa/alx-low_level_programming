#include "main.h"

/**
 * create_file - creates a file and fills  with text
 * @filename: name of the file  create
 * @text_content: text to write
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w;
	int i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[i])
			i++;
		w = write(fd, text_content, i);
		if (i != w)
			return (-1);
	}
	close(fd);
	return (1);
}
