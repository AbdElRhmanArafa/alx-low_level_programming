#include "main.h"
#include <stdlib.h>
/**
 *argstostr - concatenates all arguments of the program.
 *@ac: argument count.
 *@av: pointer to array of size ac.
 *Return: NULL if ac == 0 or av == null, Pointer to new string.
 *NULL on fail.
 * size++ in line 23  eqvalent to size + ac to
 * Keep in mind '\n' will be add later.
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, size = 1;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (0);
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (0);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			ptr[k] = av[i][j];
			k++;
			j++;
		}
		ptr[k] = '\n';
		k++;
		i++;
	}
	ptr[k] = '\n';
	return (ptr);
}
