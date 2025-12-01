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
if (!head)
return (NULL);

m = malloc(sizeof(dlistint_t));
if (m == NULL)
return (NULL);

m->n = n;
m->prev = NULL;
m->next = *head;
if (*head != NULL)
(*head)->prev = m;
*head = m;
return (*head);

}
