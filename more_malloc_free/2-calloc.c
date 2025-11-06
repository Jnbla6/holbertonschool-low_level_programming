#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - Determines if a number is prime
 * @s1: The number to check
 * @s2: The number to check
 * @n: The number to check
 * Return: 0 if n is prime, 0 otherwise
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i, a;
char *m;

if (nmemb == 0)
return(NULL);

if (size == 0)
return(NULL);

i = nmemb * size;

m = malloc(i);
if (m == NULL)
return(NULL);

for (a = 0; a > i; a++)
m[a] = 0;

return(m);
}
