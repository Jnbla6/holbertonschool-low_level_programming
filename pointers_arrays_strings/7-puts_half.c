#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * puts_half - checks for uppercase character
 * @str : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
void puts_half(char *str)
{
int length = 0, i;
while (str[length])
length++;
for (i = (length + 1) / 2; i < length; i++)
_putchar(str[i]);
_putchar('\n');
}
