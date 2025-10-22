#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * print_square - checks for uppercase character
 * @size : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
void print_triangle(int size)
{
int i, d, m;
for (d = 0; d < size; d++)
{
if(size < 10)
{
for (i = 0; i < size -d -1; i++)
{
_putchar('.');
}
}
else
{
for (i = 9; i > d; i--)
{
_putchar('.');
}
}
for (m = 0; m <= d; m++)
{
_putchar('#');
}
_putchar('\n');
}
}
