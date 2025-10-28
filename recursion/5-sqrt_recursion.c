#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

/**
 * sqrt_helper - Helper function to find natural square root recursively
 * @n: The number to find the square root of
 * @guess: The current guess being tested
 *
 * Return: Natural square root of n, or -1 if not found
 */

int sqrt_helper(int n, int guess);
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: Natural square root of n, or -1 if n has no natural square root
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
 * sqrt_helper - Helper function to find natural square root recursively
 * @n: The number to find the square root of
 * @guess: The current guess being tested
 *
 * Return: Natural square root of n, or -1 if not found
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
