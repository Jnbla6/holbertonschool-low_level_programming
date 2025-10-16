#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - check of a number
 * the number to check
 *
 * Return: last correct
 */
void times_table(void)
{
int mult;
int result;
int num;
for(mult=0; mult <= 9; mult++)
{
for (num=0; num <= 9; num++)
{
result = mult * num;
if (result <= 9)
{
_putchar(result + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else
{
_putchar(result / 10 + '0');
_putchar(result % 10 + '0');
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
