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

if (idx = 0)
{
realnode->next = temp->next;
realnode->prev = NULL;
return(realnode);
}

while(i < idx - 1)
{
temp = temp->next;
i++;

if (temp == NULL)
return (NULL);
}

realnode->next = temp->next;
realnode->prev = temp;

temp->next = realnode;

return(realnode);
}
