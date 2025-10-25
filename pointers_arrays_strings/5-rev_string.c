#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * rev_string - checks for uppercase character
 * @s : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
void rev_string(char *s)
{
char *start = s;
char *end = s;
char temp;
while (*end != '\0')
end++;
end--;
while (start < end)
{
temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
}
