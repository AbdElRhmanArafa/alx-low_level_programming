#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: stringcontaining the bytes to look for
 *
 * Return: pointer to the byte in s that accepted one of the bytes in accept
 * else return  NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
    int i=0, j2;

	for (; *s != '\0'; i++)
	{
		for (j2 = 0; accept[j2] != '\0'; j2++)
		{
			if (*s == accept[j2])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}