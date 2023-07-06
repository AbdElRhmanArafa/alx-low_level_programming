#include "main.h"

/**
 * flip_bits - flip bits to convert one number to another
 * @n: first number
 * @m: second number to convert
 * Return: number of bit that was need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference;
	int counter = 0;

	difference = n ^ m;

	while (difference)
	{
		counter++;
		difference &= (difference - 1);
	}

	return (counter);
}
