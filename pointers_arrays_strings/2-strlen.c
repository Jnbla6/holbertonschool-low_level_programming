#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * _strlen - checks for uppercase character
 * @p : func for kda kda
 * @s : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _strlen(char *s)
{
char *p = s;
while (*p)
p++;
return (p - s);
}
