#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * more_numbers - checks for uppercase character
 * Return: 1 if c is uppercase, 0 otherwise
 */
void more_numbers(void)
{
int a, l;
for (l = 0; l < 10; l++)
{
for (a = 0; a <= 14; a++)
{
if (a >= 10)
_putchar(a / 10 + '0');
_putchar(a % 10 + '0');
}
_putchar('\n');
}
}
