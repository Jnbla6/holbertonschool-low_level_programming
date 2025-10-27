
#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * _strchr - checks for uppercase character
 * @s : func for kda kda
 * @c : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; i != '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
if (c == '\0')
return (&s[i]);
return (NULL);
}
