#include "hash_tables.h"
#include <stdlib.h>

void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node, *tempnode;
unsigned long int i;

if (ht == NULL)
return;

for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node != NULL || node->next->next != NULL)
{
tempnode = node->next;
free(node->key);
free(node->value);
free(node);
node = tempnode;
}
}
ht->size = 0;
free(ht->array);
free(ht);
}