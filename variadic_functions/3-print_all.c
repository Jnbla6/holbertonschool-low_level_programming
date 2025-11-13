#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * @...: variable number of arguments to be printed
 */

void print_all(const char * const format, ...)
{
va_list num;
char *names;
int j = 0;
int a;
va_start(num, format);
while (format && format[j])
{
a = 0;
switch (format[j])
{
case 'c':
printf("%c", va_arg(num, int));
break;

case 'i':
printf("%d", va_arg(num, int));
break;

case 'f':
printf("%f", va_arg(num, double));
break;

case 's':
names = va_arg(num, char *);
if (names == NULL)
printf("(nil)");
else
printf("%s", names);
break;

default:
a = 1;
break;
}
if ((a != 1) && (format[j + 1] != '\0'))
printf(", ");
j++;
}
printf("\n");
}
