#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - Determines if a number is prime
 * @width: The number to check
 * @height: The number to check
 * Return: 0 if n is prime, 0 otherwise
 */

int **alloc_grid(int width, int height)
{
int **g;
int i, j;
int k;
if (width == 0 || height == 0)
return (NULL);
g = malloc(height * sizeof(int *));
if (g == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
g[i] = malloc(width * sizeof(int));
if (g[i] == NULL)
{
free (g);
return (NULL);
}
for (j = 0; j < width; j++)
{
g[i][j] = 0;
}
}
return (g);
}
