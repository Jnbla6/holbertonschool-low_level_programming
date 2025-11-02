#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

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
printf("Error");
}
else
{
printf("%d", *argv[1] * *argv[2]);
}
return (0);
}
