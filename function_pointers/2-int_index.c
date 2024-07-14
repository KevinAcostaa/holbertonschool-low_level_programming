#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - function index
 *
 * @array: array
 * @size: size
 * @cmp: cmp
 * Return: return
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
		{
			return (j);
		}
	}
	return (-1);
}
