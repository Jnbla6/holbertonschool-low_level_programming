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
int i;
for (i = 0; i < argc; i++)
{
printf("%s", argv[i]);
printf("\n");
}
return (0);
}
