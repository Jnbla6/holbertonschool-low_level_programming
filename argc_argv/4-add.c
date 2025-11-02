#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - Determines if a number is prime
 * @argc: The number to check
 * @argv: hello
 * Return: 0 if n is prime, 0 otherwise
 */

int main(int argc, char *argv[])
{
int i, j, sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (isalpha(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
}
for (i = 1; i < argc; i++)
{
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
