#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *temp = *h;

if (*h == NULL)
return (NULL);

while(i < idx)
{
temp = temp->next;
i++;
if (temp == NULL)
return (NULL);
}
temp->prev->next->n = n;

return(temp);
}
