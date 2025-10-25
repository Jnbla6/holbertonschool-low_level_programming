#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * _atoi - checks for uppercase character
 * @s : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int started = 0;
int digit;
while (*s)
{
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
{
started = 1;
digit = *s - '0';
if (sign == -1 && result == 214748364 && digit == 8)
return (-2147483648);
if (result > 214748364 || (result == 214748364 && digit > 7))
{
if (sign == 1)
return (2147483647);
else
return (-2147483648);
}
result = result * 10 + digit;
}
else if (started)
break;
s++;
}
return (result  sign);
}
