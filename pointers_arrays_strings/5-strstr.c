#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * *_strstr - checks for uppercase character
 * @haystack : func for kda kda
 * @needle : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i, q;
for (i = 0; haystack[i] != '\0'; i++)
{
for (q = 0; needle[q] != '\0'; q++)
{
if (haystack[i + q] != needle[q])
break;
}
if (needle[q] == '\0')
return (&haystack[i]);
}
return (NULL);
}
