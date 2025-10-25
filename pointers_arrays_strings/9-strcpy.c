#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * *_strcpy - checks for uppercase character
 * @dest : func for kda kda
 * @src : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
