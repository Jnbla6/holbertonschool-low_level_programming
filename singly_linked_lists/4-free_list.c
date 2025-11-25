#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

void free_list(list_t *head)
{
while(head)
{
head->str = NULL;
head->len = 0;
head->next = head;
}
}
