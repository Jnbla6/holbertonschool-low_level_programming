#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

if (!h)
{
return(count);
}

while(h)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
break;
}
printf("[%d] %s\n", h->len, h->str);
count++;
h = h->next;
}

return(count);
}
