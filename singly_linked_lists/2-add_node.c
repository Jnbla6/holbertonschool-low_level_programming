#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the head of the list_t list
 *
 * Return: number of nodes in the list
 */
list_t *add_node(list_t **head, const char *str)
{
char *newstr;

if (!str)
{
return (0);
}

newstr = &str;
head = &newstr;
return (head);
}
