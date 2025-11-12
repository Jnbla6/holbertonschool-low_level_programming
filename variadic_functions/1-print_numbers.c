#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * @...: variable number of parameters to be summed
 *
 * Return: sum of all parameters, or 0 if n is 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int i;
int numbers;
va_start(nums, n);
for (i = 0; i < n; i++)
{
numbers = va_arg(nums, int);
if (separator == 0)
printf("%d", numbers);
else if (i + 1 == n)
printf("%d", numbers);
else
printf("%d%s", numbers, separator);
}
printf("\n");
}
