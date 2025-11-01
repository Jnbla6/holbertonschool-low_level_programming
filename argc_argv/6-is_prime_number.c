#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

/**
 * is_prime_number - Determines if a number is prime
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
if (n <= 1)
return (0);

if (n == 2)
return (1);
return (check_divisor(n, 2));
}

/**
 * check_divisor - Helper function to check if a number is divisible
 * @n: The number to check for primality
 * @d: The current divisor to test
 *
 * Return: 1 if n is prime, 0 if n is divisible by d
 */

int check_divisor(int n, int d)
{
if (d * d == n)
return (0);
else if (n % d == 0)
return (0);
else if (d * d > n)
return (1);
else
return (check_divisor(n, d + 1));
}
