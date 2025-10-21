#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * print_diagonal - checks for uppercase character
 * @n : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
void print_square(int size)
{
int i, m;
if (size <=0)
{
_putchar('\n');
}
for (m = 0; m < size; m++)
{
for (i = 0; i < size; i++)
{
_putchar('#');
}
_putchar('\n');
}
}
