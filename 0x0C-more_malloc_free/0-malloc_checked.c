#include "main.h"
/**
 * malloc_checked -  malloc fails, the malloc_checked function
 *  should cause normal process termination with a status value of 98
 *  @b: size of the memory block to be allocated
 *
 * Return: pointer to the address of the memory block
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
