#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
int flag = 0;
	while (*s != '\0')
	{
		flag = 0;
		for (int i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				count++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (count);
		}
s++;
	}

	return (0);
}
