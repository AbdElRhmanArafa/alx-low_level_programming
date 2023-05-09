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
	int fd;
	int readBuffer, writeBuffer;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	fd = open(filename, O_WRONLY);
	readBuffer = read(fd, buffer, letters);
	write(STDOUT_FILENO, buffer, readBuffer);

	if (readBuffer != -1 || writeBuffer != -1 || readBuffer != writeBuffer)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);

	return (writeBuffer);
}
