#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fp_read, fp_write, reader, closereading, closeWritting;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fp_read = open(argv[1], O_RDONLY);
	if (fp_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fp_write = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fp_write < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fp_read);
		exit(99);
	}
	while ((reader = read(fp_read, buf, BUFSIZ)) > 0)
	{
		if (fp_write != reader)
			write(fp_write, buf, reader);
	}
	closereading = close(fp_read);
	closeWritting = close(fp_write);
	if (closereading < 0 || closeWritting < 0)
	{
		if (closereading < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_read);
		if (closeWritting < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_write);
		exit(100);
	}
	return (0);
}
