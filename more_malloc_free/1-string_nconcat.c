#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

for (len1 = 0; s1[len1] != '\0' ; len1++)
;

for (len2 = 0; s2[len2] != '\0' ; len2++);
;

if (n > len2)
n = len2;




j = malloc(n + len1 + 1);

if (j == NULL)
return(NULL);

for (copy = 0; copy < len1; copy++)
{
j[copy] = s1[copy];
}
for (total = 0; total < n; total++)
{
j[total + copy] = s2[total];
}
j[copy + total] = '\0';
return (j);
}
