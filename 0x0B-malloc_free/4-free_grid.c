#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 *
 * @grid: grid
 * @height: height of grid
 *
 */

void free_grid(int **grid, int height)
{
	int a;

	if (height <= 0)
		return;
	if (grid == NULL)
		return;

	a = 0;
	while (a < height)
	{
		free(grid[a]);
		a++;
	}
	free(grid);
}
