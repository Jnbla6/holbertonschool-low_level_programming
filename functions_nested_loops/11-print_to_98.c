#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
int num;

if (n <= 98)
{
for (num = n; num <= 98; num++)
{
if (num < 10 && num >= 0)
{
_putchar(num + '0');
}
else if (num >= 10)
{
_putchar((num / 10) + '0');
_putchar((num % 10) + '0');
}
else
{
_putchar('-');
if (num > -10)
{
_putchar(-num + '0');
}
else
{
_putchar(-(num / 10) + '0');
_putchar(-(num % 10) + '0');
}
}

if (num != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
else
{
for (num = n; num >= 98; num--)
{
if (num < 10 && num >= 0)
{
_putchar(num + '0');
}
else
{
_putchar((num / 10) + '0');
_putchar((num % 10) + '0');
}

if (num != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
