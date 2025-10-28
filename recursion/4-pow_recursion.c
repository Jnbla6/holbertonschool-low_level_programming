#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * factorial - checks for uppercase character
 * @n : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return(-1);
else if (y == 0)
return(1);
else
return (x * _pow_recursion (x, y - 1));
}
