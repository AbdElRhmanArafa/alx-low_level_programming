#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse
 * @s: string to print in reverse order
*/
void _print_rev_recursion(char *s)
{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
}
