#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
/**
 * _sqrt_recursion - checks for uppercase character
 * sqrt_helper - checks for uppercase character
 * @n : func for kda kda
 * @guess : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);

return (sqrt_helper(n, 1));
}

/**
 * _sqrt_recursion - checks for uppercase character
 * sqrt_helper - checks for uppercase character
 * @n : func for kda kda
 * @guess : func for kda kda
 * Return: 1 if c is uppercase, 0 otherwise
 */

int sqrt_helper(int n, int guess)
{
if (guess * guess == n)
return (guess);
else if (guess * guess > n)
return (-1);
else
return (sqrt_helper(n, guess + 1));
}
