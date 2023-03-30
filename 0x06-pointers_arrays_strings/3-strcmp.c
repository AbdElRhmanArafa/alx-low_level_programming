#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: less than 0 if s1 is less than s2, 0 if they're equal,
 * more than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
  int sum = 0, i, n = 0,n2=0;
  while (s1[n] != '\0')
    {
        n++;
    }
     while (s2[n2] != '\0')
    {
        n2++;
    }
    if(n2 >n)
    n=n2;

    for (i = 0; i < n; i++)
    {
        sum = s1[i] - s2[i];
        if (sum != 0)
        {
            return sum;
        }
    }
    return (0);
}
