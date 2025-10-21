#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * print_line - checks for uppercase character
 * @n : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
void print_diagonal(int n)
{
int a, w;
for (a = 1; a<= n; a++)
{
_putchar('\n');
for (w = a; w >= 1; w--)
{
_putchar(' ');
}
_putchar('\\');
}
_putchar('\n');
}
