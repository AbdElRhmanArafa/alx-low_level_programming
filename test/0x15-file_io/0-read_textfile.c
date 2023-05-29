#include "main.h"

/**
 * read_textfile - reads a file and print it to the
 * POSIX standard output.
 * @filename: the name of the file.
 * @letters: the number of characters to be read from the file
 *
 * Return: the number of character read from file.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t readBuffer, writeBuffer = 0;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	readBuffer = read(fd, buffer, letters);
	if (readBuffer < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[readBuffer] = '\0';
	close(fd);
	writeBuffer = write(STDOUT_FILENO, buffer, readBuffer);

	if (writeBuffer < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);

	return (writeBuffer);
}
