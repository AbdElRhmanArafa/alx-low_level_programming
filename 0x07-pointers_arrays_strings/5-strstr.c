#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for first occurrence
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, jx;

	for (; haystack[i] != '\0'; i++)
	{
		for (jx = 0; needle[jx] != '\0'; jx++)
		{
			if (haystack[i + jx] != needle[jx])
				break;
		}
		if (!needle[jx])
			return (&haystack[i]);
	}
	return (0);
}
