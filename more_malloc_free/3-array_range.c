#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - Determines if a number is prime
 * @min: The number to check
 * @max: The number to check
 * Return: 0 if n is prime, 0 otherwise
 */


int *array_range(int min, int max)
{
int i, a;
int *g;
if (min > max)
return (NULL);

i = max - min + 1;

g = malloc(i * sizeof(int));
if (g == NULL)
return (NULL);

for (a = 0; a < i; a++, min++)
g[a] = min;

return (g);
}
