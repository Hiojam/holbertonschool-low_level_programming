#include "main.h"

/**
 * **alloc_grid - Returns a pointer to a 2 dimensional array of ints
 *
 * @width: int
 * @height: int
 * Return: A pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		grid[y] = malloc(sizeof(int) * width);

		if (grid[y] != NULL)
			continue;

		for (y--; y >= 0; y--)
			free(grid[y]);

		free(grid);
		return (NULL);
	}

	for (y = 0; y < height; y++)
		for (x = 0; x < width; x++)
			grid[y][x] = 0;

	return (grid);
}
