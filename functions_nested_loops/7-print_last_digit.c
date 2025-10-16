#include "main.h"
#include <stdio.h>
/**
 * _abs - check of a number
 * @r: the number to check
 *
 * Return: r if n is positive -r if n is negative
 */
int print_last_digit(int n)
{
int last;
last = n % 10;
if ( last < 0)
last = -last;
_putchar(last + '0');
return last;
}
