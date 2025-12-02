#include "lists.h"


int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *temp = head;

while(temp->next != NULL)
{
sum += temp->n;
temp = temp->next;
}
if(temp->next != NULL)
sum += temp->n;
return(sum);
}
