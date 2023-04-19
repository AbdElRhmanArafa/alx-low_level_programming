#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: element to search
 * @size:  is the number of elements in the array array
 * @cmp: is a pointer to the function to be used to compare values
 * return: If no element matches, return -1
 *  If size <= 0, return -1
 *  Return: count of integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array || cmp)
		return (-1);
	for (; i < size; i++)
	{
		if (cmp(i) == 1)
		{
			return (i);
		}
	}
	return (-1);
}
