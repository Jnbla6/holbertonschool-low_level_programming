#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * _puts_recursion - checks for uppercase character
 * @s : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
void _puts_recursion(char *s)
{
static int i = 0;
if ( s[i] == '\0')
return;
_putchar(s[i]);
i++;
_puts_recursion(s);
}
