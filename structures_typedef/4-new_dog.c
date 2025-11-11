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
dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *new_dog = {*name, age, *owner};

}
