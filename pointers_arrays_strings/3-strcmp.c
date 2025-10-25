#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * _strcmp - checks for uppercase character
 * @s1 : func for kda kda
 * @s2 : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
{
i++;
}
return (s1[i] - s2[i]);
}
