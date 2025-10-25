#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * puts2 - checks for uppercase character
 * @str : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
if (str[i + 1] == '\0')
break;
i += 2;
}
_putchar('\n');
}
