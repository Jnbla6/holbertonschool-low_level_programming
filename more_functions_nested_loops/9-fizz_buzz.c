#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * main - checks for uppercase character
 * Return: 1 if c is uppercase, 0 otherwise
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
printf(" ");
}
else if (i % 5 == 0)
{
printf("Buzz");
printf(" ");
}
else if (i % 3 == 0)
{
printf("Fizz");
printf(" ");
}
else
{
printf("%d", i);
printf(" ");
}
}
printf("\n");
return (0);
}
