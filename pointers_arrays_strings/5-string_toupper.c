#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * *string_toupper - checks for uppercase character
 * @str : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
char *string_toupper(char *str)
{
char *ptr = str;
while (*ptr != '\0')
{
if (*ptr >= 'a' && *ptr <= 'z')
*ptr = *ptr - 32;
ptr++;
}
return (str);
}
