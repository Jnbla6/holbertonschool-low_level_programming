#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Determines if a number is prime
 * @grid: The number to check
 * @height: The number to check
 * Return: 0 if n is prime, 0 otherwise
 */


void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
