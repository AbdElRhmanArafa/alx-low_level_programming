#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for first occurrence 
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
    while (*haystack != '\0')
    {
        if (*haystack == needle[0])
        return haystack;
        haystack++;
    }
    return (0);
}