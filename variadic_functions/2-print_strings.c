#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * @...: variable number of strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list nums;
unsigned int i;
char *names;
va_start(nums, n);
for (i = 0; i < n; i++)
{
names = va_arg(nums, char *);
if (separator == 0)
printf("%s", names);
else if (names == NULL)
printf("(nil)");
else if (i + 1 == n)
printf("%s", names);
else
printf("%s%s", names, separator);
}
printf("\n");
}
