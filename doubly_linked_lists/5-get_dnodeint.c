#include "lists.h"



dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;

dlistint_t *fakenode = head;

if(fakenode == NULL)
return(NULL);

while(i < index)
{
fakenode = fakenode->next;
i++;
}

if(fakenode == NULL)
return(NULL);

return (fakenode);
}
