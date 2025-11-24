#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

while(h)
{
if (!h->str)
{
printf("[0] (nil)\n");
return(count);
}
else
{
printf("[%d] %s\n", h->len, h->str);
count++;
h = h->next;
}
}
return(count);
}
