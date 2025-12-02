#include "lists.h"


int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *temp = head;

if(temp == NULL)
return(NULL);

while(temp != NULL)
{
sum += temp->n;
temp = temp->next;
if(temp == NULL)
return(NULL);
}

return(sum);
}
