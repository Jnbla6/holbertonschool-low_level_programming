#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * print_array - checks for uppercase character
 * @a : func for kda kda
 * @n : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", *(a + i));
if (i < n - 1)
printf(", ");
}
printf("\n");
}
