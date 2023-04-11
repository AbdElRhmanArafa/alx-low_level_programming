#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
		return (0);
	ptr = (char *)malloc(size * sizeof(char));
	int i = 0;
	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}

	*(ptr + i) = '\0';
	return (ptr);
}
