#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - Determines if a number is prime
 * @s1: The number to check
 * @s2: The number to check
 * @n: The number to check
 * Return: 0 if n is prime, 0 otherwise
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1, len2, copy, total;
char *j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);

if (n > len2)
{
n = len2;
}

j = malloc(n + len1 + 1);
{
if (j == NULL)
return(NULL);
}

for (copy = 0; copy < len1; copy++)
{
j[copy] = s1[copy];
}
for (total = 0; copy < n; total++)
{
j[total] = s2[total];
}
j[copy + total] = '\0';
return (j);
}
