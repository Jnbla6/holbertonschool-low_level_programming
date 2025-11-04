#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Determines if a number is prime
 * @s1 The number to check
 * @s2 The number to check
 * Return: 0 if n is prime, 0 otherwise
 */

char *str_concat(char *s1, char *s2)
{
int count1 = 0, count2 = 0, i = 0;
int count;
int a = 0;
char *k;
if (s1 == NULL)
(s1 = "");
if (s2 == NULL)
(s2 = "");
for (; s1[count1] != '\0'; count1++)
;
for (; s2[count2] != '\0'; count2++)
;
count = count1 + count2;
k = malloc(count + 1 * sizeof(char));
if (k == NULL)
return (NULL);
while (s1[i] != '\0')
{
k[i] = s1[i];
i++;
}
while (s2[a] != '\0')
{
k[i] = s2[a];
i++;
a++;
}
k[count] = '\0';
return (k);
}
