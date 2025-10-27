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
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, q, a;
unsigned int g = 0;
for (i = 0; s[i] != '\0'; i++)
{
a = 0;
for (q = 0; accept[q] != '\0'; q++)
{
if (s[i] == accept[q])
{
a = 1;
break;
}
}
if (a == 0)
break;
g++;
}
return (g);
}
