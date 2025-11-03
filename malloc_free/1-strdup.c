#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Determines if a number is prime
 * @size: The number to check
 * @c: hello
 * Return: 0 if n is prime, 0 otherwise
 */

char *_strdup(char *str)
{
int count = 0, i;
char *k;
if (str == NULL)
return (NULL);
for (; str[count] != '\0'; count++)
;
k = malloc(count + 1 * sizeof(char));
if (k == NULL)
return (NULL);
for (i = 0; i < count; i++)
k[i] = str[i];
k[count] = '\0';
return (k);
}
