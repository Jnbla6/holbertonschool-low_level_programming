#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *temp = *h;
dlistint_t *realnode = *h;

realnode = malloc(sizeof(dlistint_t));
if (realnode == NULL)
return (NULL);
realnode->n = n;

if (*h == NULL)
return (NULL);

if (idx == 0)
{
realnode->next = *h;
realnode->prev = NULL;
if (*h != NULL)
(*h)->prev = realnode;
*h = realnode;
return (realnode);
}

while (temp != NULL && i < idx - 1)
{
temp = temp->next;
i++;
}

if(temp == NULL)
{
free(realnode);
return (NULL);
}

realnode->next = temp->next;
realnode->prev = temp;

if (temp->next == NULL)
realnode->next->prev = realnode;

temp->next = realnode;

return (realnode);
}
