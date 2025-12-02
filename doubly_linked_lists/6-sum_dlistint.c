#include "lists.h"


int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *temp = head;

if(temp == NULL)
return(0);

while(temp != NULL)
{
sum += temp->n;
temp = temp->next;
}

return(sum);
}
