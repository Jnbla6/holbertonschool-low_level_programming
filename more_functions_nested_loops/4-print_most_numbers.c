#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * print_most_numbers - checks for uppercase character
 * Return: 1 if c is uppercase, 0 otherwise
 */
void print_most_numbers(void)
{
int a;
for (a = 0; a <= 9; a++)
if (a != 2 && a != 4)
_putchar(a + '0');
{
_putchar('\n');
}
}
