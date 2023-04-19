#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter\
 *  on each element of an array.
 * @array: pass value
 * @size:  the size of the array
 * @action: a pointer to the function you need to use
 * return void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (action != NULL && array != NULL)
	{
		for (; i < (int)size; i++)
		{
			(*action)(array[i]);
		}
	}
}
