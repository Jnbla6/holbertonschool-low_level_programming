#include "hash_tables.h"
#include <stdlib.h>

void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node;
unsigned long int i;

if (ht == NULL)
return;

for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node != NULL)
{
free(node->key);   
free(node->value); 
free(node);        
}
}
free(ht->array);
ht->size = 0;
free(ht);
}