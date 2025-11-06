#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - Determines if a number is prime
 * @nmemb: The number to check
 * @size: The number to check
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

for (a = 0; m[a] != '\0'; a++)
m[a] = 0;

return(m);
}
