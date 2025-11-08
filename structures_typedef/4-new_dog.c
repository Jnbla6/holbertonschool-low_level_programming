#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * *new_dog - initializes a variable of type struct dog
 * @name: pointer to struct dog to initialize
 * @age: pointer to struct dog to initialize
 * @owner: pointer to struct dog to initialize
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int i, j;
char *k, *h;
int o, n;
dog_t *new_dog;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
for (i = 0; name[i] != '\0'; i++)
;
for (j = 0; owner[j] != '\0'; j++)
;
k = malloc(i + 1);
if (k == NULL)
{
free(new_dog);
return (NULL);
}
h = malloc(j + 1);
if (h == NULL)
{
free(new_dog);
free(k);
return (NULL);
}
for (n = 0; n <= i; n++)
k[n] = name[n];
for (o = 0; o <= j; o++)
h[o] = owner[o];
new_dog->name = k;
new_dog->age = age;
new_dog->owner = h;
return (new_dog);
}
