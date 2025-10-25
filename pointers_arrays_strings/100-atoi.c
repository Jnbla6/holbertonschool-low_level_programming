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
while (*s)
{
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
{
started = 1;
result = result * 10 + (*s - '0');
}
else if (started)
break;
s++;
}
return (result * sign);
}
