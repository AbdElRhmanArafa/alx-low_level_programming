
#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination memory area
 * @src: socure memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ix = 0;

	while (ix < n)
	{
		dest[ix] = src[ix];
		ix++;
	}

	return (dest);
}
