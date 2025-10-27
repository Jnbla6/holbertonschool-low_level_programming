#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * puts_half - checks for uppercase character
 * @str : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
if (a[i][j] >= 32 && a[i][j] <= 126)
printf("%c", a[i][j]);
else
printf(" ");
}
printf("\n");
}
}