#include <stdlib.h>
#include "main.h"
/**
 * free_grid - fucntion
 * @grid: girlla
 * @height: alto
 * Return: always
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
