#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * *_strncat - checks for uppercase character
 * @dest : func for kda kda
 * @src : func for kda kda
 * @n : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;
while (*ptr)
ptr++;
while (n-- > 0 && *src)
*ptr++ = *src++;
*ptr = '\0';
return (dest);
}
