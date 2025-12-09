#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
hash_node_t *temp;
long unsigned int i = 0;

for(i = 0; i < ht->size; i++)
{
temp = ht->array[i];
while (temp != NULL)
{
free(temp->key);
free(temp->value);
}
free(temp);
temp = temp->next;
}
}
