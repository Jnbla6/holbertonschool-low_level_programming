#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the head of the list_t list
 *
 * Return: number of nodes in the list
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *m;
char *s;
int count = 0;

if (!str)
return (0);

while(str[count])
count++;

m = malloc(sizeof(list_t));
s = strdup(str);
m->str = s;
m->len = count;
m->next = *head;
*head = m;
return (*head);

}
