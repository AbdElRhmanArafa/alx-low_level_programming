#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int masks = 1;
	int bit_count = sizeof(n) * 8 - 1;
	int flag = 0;

	while (bit_count >= 0)
	{
		if ((n >> bit_count) & masks)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag || bit_count == 0)
		{
			_putchar('0');
		}
		bit_count--;
	}
}
