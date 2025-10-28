#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * _strlen_recursion - checks for uppercase character
 * @s : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _strlen_recursion(char *s)
{ 
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
