#include "main.h"
#include <stdio.h>
/**
 * print_sign - prints the sign of a number
 * @n: the number to check
 *
 * Return: 1 if n is positive, 0 if n is zero, -1 if n is negative
 */
int _abs(int n)
{
if (n < 0)
{
_putchar(-n);
return 0;
}
else
{
_putchar(n);
return 0;
}
}
