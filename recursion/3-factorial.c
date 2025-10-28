#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * factorial - checks for uppercase character
 * @n : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
int factorial(int n)
{
if (n == 0)
return (1);
else if
(n < 0)
return (-1);
else
return (n * factorial(n -1));
}
