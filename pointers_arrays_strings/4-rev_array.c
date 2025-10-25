#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * reverse_array - checks for uppercase character
 * @a : func for kda kda
 * @n : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
void reverse_array(int *a, int n)
{
int temp, i;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
