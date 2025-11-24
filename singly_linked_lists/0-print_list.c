#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
int count = 0;

if (!h->str)
{
printf("[0] (nil)\n");
return(0);
}

while(h->str)
{
printf("[%d] %s\n", h->len, h->str);
count++;
h = h->next;
}
return(count);
}
