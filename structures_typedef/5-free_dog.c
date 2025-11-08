#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * *free_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * Return: void
 */
void free_dog(dog_t *d)
{
free(d);
}