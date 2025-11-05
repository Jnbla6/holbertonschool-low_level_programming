#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - Determines if a number is prime
 * @b: The number to check
 * Return: 0 if n is prime, 0 otherwise
 */


void *malloc_checked(unsigned int b)
{
void *i;

i = malloc(b);
if (i == NULL)
exit(98);
return (i);

}
