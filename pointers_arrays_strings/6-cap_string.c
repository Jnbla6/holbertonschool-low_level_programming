#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * *string_toupper - checks for uppercase character
 * @str : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
char *cap_string(char *str)
{
int i, j;
char separators[] = " \t\n,;.!?\"(){}";
for (i = 0; str[i] != '\0'; i++)
{
if (i == 0)
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
}
else
{
for (j = 0; separators[j] != '\0'; j++)
{
if (str[i - 1] == separators[j] && str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
break;
}
}
}
}
return (str);
}
