#include "main.h"

/**
* array_range - creates an array of integers
* @min: smallest number in the array
* @max: lagrest value in the array
*
* Return: pointer to the address of the memory block
*/
int *array_range(int min, int max)
{
	int *ptr, size, j = 0;

	if (min > max)
		return (NULL);
	size = (min - max);
	ptr = malloc(size * sizeof(int));
	if (ptr != NULL)
	{
		for (int i = min; i < max; i++)
		{
			ptr[j] = i;
			j++;
		}
		return (ptr);
	}
	return (NULL);
}
