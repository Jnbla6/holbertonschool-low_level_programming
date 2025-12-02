#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *temp = *head;
dlistint_t *real = *head;


if (head == NULL || *head == NULL)
return (-1);

if (index == 0)
{
*head = temp->next;
if (*head != NULL)
(*head)->prev = NULL;
free(temp);
return (1);
}

if (*head == NULL)
return (-1);

while (temp != NULL && i < index)
{
temp = temp->next;
i++;
}
if (temp == NULL)
return (-1);

if(temp->prev != NULL)
temp->prev->next = temp->next;

if(temp->next != NULL)
temp->next->prev = temp->prev;

free(temp);
return (1);
}
