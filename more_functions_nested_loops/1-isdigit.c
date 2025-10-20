#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - checks for uppercase character
 * @c: character to check
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
return (0);
}
