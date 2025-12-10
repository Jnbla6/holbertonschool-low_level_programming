#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 */

void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node, *tempnode;
unsigned long int i;

if (ht == NULL)
return;

for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node != NULL)
{
tempnode = node->next;
free(node->key);
free(node->value);
free(node);
node = tempnode;
}
}
free(ht->array);
free(ht);
}
