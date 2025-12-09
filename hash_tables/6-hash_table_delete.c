#include "hash_tables.h"
#include <stdlib.h>

void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *node, *tmp;

if (ht == NULL)
return;

for (i = 0; i < ht->size; i++)
{
node = ht->array[i];

while (node != NULL)
{
tmp = node->next;

if (node->key != NULL)
free(node->key);

if (node->value != NULL)
free(node->value);

free(node);

node = tmp;
}

ht->array[i] = NULL; 
}

free(ht->array);

free(ht);
}