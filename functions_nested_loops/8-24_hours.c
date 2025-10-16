#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - check of a number
 * the number to check
 *
 * Return: last correct
 */
void jack_bauer(void)
{
int minute;
int hour = -1;
while (hour < 23)
{
hour++;
for (minute = 0; minute < 60; minute++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n');
}
}
}
