#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - check of a number
 * @n: the number to check
 *
 * Return: last correct
 */
void jack_bauer(void)
{
int minute;
int hour = 0;
while (hour < 23)
{
hour++;
for (minute = 0; minute < 60; minute++)
{
_putchar((hour/10) + '0');
_putchar((hour%10) + '0');
_putchar(':');
_putchar((minute/10) + '0');
_putchar((minute%10) + '0');
_putchar('\n');
}
}
}
