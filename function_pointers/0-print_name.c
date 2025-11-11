#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - initializes a variable of type struct dog
 * @f: pointer to struct dog to initialize
 * @name: name to assign to the dog
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
