#include <stdlib.h>

/**
 * free_grid -  frees a 2 dimensional grid previously created,
 * by alloc_grid function
 * @grid: The 2D array to free memory from
 * @height: The height of the 2D array
 *
 * Return: Always 0
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
