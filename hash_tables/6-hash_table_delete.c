#include "hash_tables.h"
#include <stdlib.h>

void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node, *temp;
unsigned long int i;

if (ht == NULL)
return;

for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
temp = node->next;

while (node != NULL)
{
free(node->key);   
free(node->value); 
free(node);        
}
temp = node->next;
}
free(ht->array);
ht->size = 0;
free(ht);
}