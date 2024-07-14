#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - function
 * @array: array
 * @size: size
 * @action: action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
