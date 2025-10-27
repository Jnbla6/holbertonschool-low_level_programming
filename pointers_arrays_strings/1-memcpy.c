#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * _memcpy - checks for uppercase character
 * @dest : func for kda kda
 * @src : func for kda kda
 * @n : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
