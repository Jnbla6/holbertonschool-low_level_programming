#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * *_strspn - checks for uppercase character
 * @s : func for kda kda
 * @accept : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i, q;
for (i = 0; s[i] != '\0'; i++)
{
for (q = 0; accept[q] != '\0'; q++)
{
if (s[i] == accept[q])
{
return (&s[i]);
}
}
}
return (NULL);
}
