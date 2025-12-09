#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
hash_node_t *temp;
int i = 0;

if (ht == NULL)
return (NULL);

for(i = 0; i < ht->size; i++)
{
temp = ht->array[i];
temp = NULL;
}
}
