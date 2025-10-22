#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * print_triangle - checks for uppercase character
 * @size : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
void print_triangle(int size)
{
int i, d, m;

if (size <= 0)
{
_putchar('\n');
return;
}

for (d = 0; d < size; d++)
{
for (i = 0; i < size - d - 1; i++)
{
_putchar(' ');
}
for (m = 0; m <= d; m++)
{
_putchar('#');
}
_putchar('\n');
}
}
