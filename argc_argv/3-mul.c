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
if (argc != 3)
{
printf("Error\n");
}
else
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
return (0);
}
