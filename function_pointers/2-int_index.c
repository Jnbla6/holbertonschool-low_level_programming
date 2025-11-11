#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array to iterate through
 * @size: size of the array
 * @action: pointer to the function to use
 *
 * Return: Nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
return (-1);

if (cmp == NULL)
return (-1);

if (array == NULL)
return (-1);

for (i = 0; i < size; i++)
if (cmp(array[i]) != 0)
return(i);
return (-1);


}
