#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the dlistint_t list
 *
 * Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
int i = 0;
if (h == NULL)
return(0);

while(h)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return(i);
}
