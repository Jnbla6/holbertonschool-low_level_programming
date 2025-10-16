#include "main.h"
#include <stdio.h>
/**
 * function print_last_digit - check of a number
 * @n: the number to check
 *
 * Return: last correct
 */
int print_last_digit(int n)
{
int last;
last = n % 10;
if (last < 0)
last = -last;
_putchar(last + '0');
return (last);
}
