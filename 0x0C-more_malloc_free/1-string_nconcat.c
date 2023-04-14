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
	int lenS1 = 0, lenS2 = 0, i, Max;
	char *ptr;

	if (*s1 == "" || *s2 == "")
		return (NULL);
	while (s1[lenS1] != '\0')
	{
		lenS1++;
	}
	while (s1[lenS2] != '\0')
	{
		lenS2++;
	}
	if (n > lenS2)
		n = lenS2;
	Max = (lenS1 + n);
	ptr = malloc(sizeof(char) * Max + 1);
	if (ptr == NULL)
		return (NULL);
	int j = 0;

	for (i = 0; i < Max; i++)
	{
		if (i < lenS1)
			ptr[i] = s1[i];
		else
		{
			ptr[i] = s2[j];
			j++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
