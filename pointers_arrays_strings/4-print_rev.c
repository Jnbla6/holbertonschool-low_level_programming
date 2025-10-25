#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * print_rev - checks for uppercase character
 * @s : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
void print_rev(char *s)
{
char *end = s;
while (*end != '\0')
end++;
while (end > s)
{
end--;
_putchar(*end);
}
_putchar('\n');
}
