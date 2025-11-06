#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to assign to the dog
 * @age: age to assign to the dog
 * @owner: owner to assign to the dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{

if (d == NULL)
return;

if (d->name == NULL)
d->name = "(nil)";

if (d->owner == NULL)
d->owner = "(nil)";


printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
