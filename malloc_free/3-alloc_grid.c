#include "main.h"
#include <stdlib.h>
/**
 * main - function
 * @height: altura
 * @width: ancho
 * Return: always
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **bidimensional;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	bidimensional = malloc(height * sizeof(int *));

	if (bidimensional == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		bidimensional[i] = malloc(width * sizeof(int*));

		if (bidimensional[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(bidimensional[j]);
			}
			free(bidimensional);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			bidimensional[i][j] = 0;
		}
	}
	return (bidimensional);
}
