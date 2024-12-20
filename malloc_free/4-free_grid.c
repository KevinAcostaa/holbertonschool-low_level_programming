#include "main.h"
#include <stdlib.h>
/**
 * free_grid - fucntion
 * @height: height
 * @grid: grid
 * Return: grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
