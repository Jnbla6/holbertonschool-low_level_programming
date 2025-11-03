#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_array - Determines if a number is prime
 * @size: The number to check
 * @c: hello
 * Return: 0 if n is prime, 0 otherwise
 */

char *create_array(unsigned int size, char c)
{
char *pa;
unsigned int i;
if (size == 0) 
{
return (NULL);
}
pa = malloc(size * sizeof(char));
if (pa == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
pa[i] = c;
}
return (pa);
}