#include "lists.h"



dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
int i = 0;

dlistint_t *fakenode;
fakenode = head;

while(i <= index)
{
fakenode = fakenode->next;
i++;
}
return (fakenode);
}
