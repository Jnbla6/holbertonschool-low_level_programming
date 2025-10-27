#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * *_strpbrk - checks for uppercase character
 * @s : func for kda kda
 * @accept : func for kda kda
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
{
return (&haystack[i]);
}
}
}
return (NULL);
}
