#include "function_pointers.h"

/**
 * array_iterator - function given as a perameter on each element of array
 * @array: pointer
 * @size: unsigned int
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
