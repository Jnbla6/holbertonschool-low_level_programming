#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * print_diagonal - checks for uppercase character
 * @n : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
void print_diagonal(int n)
{
int a, w;
if (n > 0)
{
for (a = 0; a < n; a++)
{
for (w = 0; w < a; w++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
