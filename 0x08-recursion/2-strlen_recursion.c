#include "main.h"
/**
 *  _strlen_recursion - returns the length of a string
 * @s: string to get here length recursion
 *  Return: length of the string
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		_strlen_recursion(1 + _strlen_recursion(s + 1));
	}
	return (0);
}
