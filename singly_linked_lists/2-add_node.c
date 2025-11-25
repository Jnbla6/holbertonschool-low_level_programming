#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *m;
char *s;
int count = 0;

if (!str)
return (NULL);

while (str[count])
count++;

m = malloc(sizeof(list_t));
if (m == NULL)
return (NULL);

s = strdup(str);
if (s == NULL)
{
free(m);
return (NULL);
}

m->str = s;
m->len = count;
m->next = *head;
*head = m;
return (*head);

}
