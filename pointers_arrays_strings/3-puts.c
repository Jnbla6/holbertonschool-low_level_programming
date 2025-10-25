#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * _puts - checks for uppercase character
 * @str : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar('\n');
}
