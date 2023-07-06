#include "main.h"

/**
 * get_endianness - check endianness
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
	int tester = 0x04030201;
	char *ptr = (char *)&tester;

	if (*ptr == 1)
		return (1);
	return (0);
}
