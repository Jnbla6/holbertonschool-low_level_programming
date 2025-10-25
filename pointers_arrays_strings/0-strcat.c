#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * _strcat - checks for uppercase character
 * @dest : func for kda kda
 * @src : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
char *_strcat(char *dest, char *src)
{
char *ptr = dest;
while (*ptr)
ptr++;
while (*src)
*ptr++ = *src++;
*ptr = '\0';
return (dest);
}
