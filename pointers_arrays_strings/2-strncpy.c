#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * *_strncpy - checks for uppercase character
 * @dest : func for kda kda
 * @src : func for kda kda
 * @n : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
if (src[i] == '\0')
{
/* If we hit null terminator, pad rest with nulls */
for (i++; i < n; i++)
dest[i] = '\0';
break;
}
}
return (dest);
}
