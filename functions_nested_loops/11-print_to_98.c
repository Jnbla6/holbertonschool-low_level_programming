#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
int i;

if (n <= 98)
{
for (i = n; i <= 98; i++)
{
print_number(i);
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
else
{
for (i = n; i >= 98; i--)
{
print_number(i);
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}

/**
* print_number - prints a single number
* @num: the number to print
*
* Return: void
*/
void print_number(int num)
{
int abs_num;

if (num < 0)
{
_putchar('-');
abs_num = -num;
}
else
{
abs_num = num;
}

if (abs_num < 10)
{
_putchar(abs_num + '0');
}
else if (abs_num < 100)
{
_putchar((abs_num / 10) + '0');
_putchar((abs_num % 10) + '0');
}
else
{
_putchar((abs_num / 100) + '0');
_putchar(((abs_num / 10) % 10) + '0');
_putchar((abs_num % 10) + '0');
}
}
