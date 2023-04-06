#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse
 * @s: string to return in reverse order
 */
char *return_rev_recursion(char *s)
{
	if (*s)
	{
		return_rev_recursion(s + 1);
		return (s);
	}
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	char *revString = "";

	revString = return_rev_recursion(*s);
	if (s == revString)
		return (1);
	return (0);
}
