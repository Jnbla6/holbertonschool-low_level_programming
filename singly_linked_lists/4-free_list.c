#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 */

void free_list(list_t *head)
{
list_t *tmp;
if (head == NULL)
return;

while (head != NULL)
{
tmp = head;
head = head->next;
if (tmp != NULL)
free(tmp->str);
free(tmp);
}
}
