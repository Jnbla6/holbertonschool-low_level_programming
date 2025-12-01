#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *m;
char *s;
int count = 0;

if (!n)
return (NULL);

m = malloc(sizeof(dlistint_t));
if (m == NULL)
return (NULL);

if (n == NULL)
{
free(m);
return (NULL);
}

m = n;
m->next = *head;
*head = m;
return (*head);

}
