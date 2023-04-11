#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	int i = 0;
	int len = 0;
	char *ptr;

	len = strlen(str) + 1;
	if (str == NULL)
		return (0);
	ptr = (char *) malloc(len * sizeof(*str));
	if (ptr == NULL)
		return (0);
	while ((ptr[i] = str[i]) != '\0')
		i++;

	return (ptr);
}
