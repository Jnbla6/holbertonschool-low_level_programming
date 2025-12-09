#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 */

void hash_table_delete(hash_table_t *ht)
{
hash_node_t *temp, *link;
long unsigned int i = 0;

if (ht == NULL)
return;

for(i = 0; i < ht->size; i++)
{
temp = ht->array[i];
while (temp != NULL)
{
link = temp->next;
free(temp->key);
free(temp->value);
free(temp);
temp = link;
}
}
free(ht->array);
free(ht);
}
