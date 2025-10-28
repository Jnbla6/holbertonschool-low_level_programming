#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * _print_rev_recursion - checks for uppercase character
 * @s : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;
_print_rev_recursion(s + 1);
_putchar(*s);
}
