#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: variable number of integers to be printed
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
