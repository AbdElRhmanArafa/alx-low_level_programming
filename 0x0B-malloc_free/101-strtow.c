#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */

char **strtow(char *str)
{
	int i, j, k, size = 1;
	char **matrix, *ptr;

	i = 0;

	if (!str)
		return (0);
	while (str[i])
	{
		i++;
		if (str[i - 1] == ' ')
			continue;
		size++;
	}
}
