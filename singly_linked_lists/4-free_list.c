#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 */

void free_list(list_t *head)
{
list_t *tmp = head;
while(tmp)
{
list_t *clear = tmp;
tmp = tmp->next;
free(clear);
}
}
