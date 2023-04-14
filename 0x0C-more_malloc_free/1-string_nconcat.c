#include "main.h"
/**
 * string_nconcat - Concatenates two strings using at
 * most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 * Otherwise - a pointer to the concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len = n, ID;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ID = 0; s1[ID]; ID++)
		len++;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	len = 0;

	for (ID = 0; s1[ID]; ID++)
		ptr[len++] = s1[ID];

	for (ID = 0; s2[ID] && ID < n; ID++)
		ptr[len++] = s2[ID];

	ptr[len] = '\0';

	return (ptr);
}
