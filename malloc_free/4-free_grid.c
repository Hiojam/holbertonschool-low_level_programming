#include "main.h"

/**
 * free_grid - Frees a 2 dimensional grid.
 *
 * @grid: **int
 * @height: int
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int y;

	if (height <= 0 || grid == NULL)
		return;

	for (y = 0; y < height; y++)
	{
		if (grid[y] != NULL)
			continue;

		for (y--; y >= 0; y--)
			free(grid[y]);

		free(grid);
	}
}
