#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the dlistint_t list
 * @index: index of the node, starting from 0
 *
 * Return: pointer to the node at the index, or NULL if it does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;

dlistint_t *fakenode = head;

if (fakenode == NULL)
return (NULL);

while (i < index)
{
fakenode = fakenode->next;
if (fakenode == NULL)
return (NULL);
i++;
}

return (fakenode);
}
