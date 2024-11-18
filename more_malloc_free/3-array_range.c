#include <stdlib.h>
#include "main.h"
/**
 * array_range - function
 * @min: min
 * @max: max
 * Return: ptr
 */

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min + i <= max; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
