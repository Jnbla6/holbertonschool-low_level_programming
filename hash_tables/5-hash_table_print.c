#include "hash_tables.h"


void hash_table_print(const hash_table_t *ht)
{
hash_node_t *temp;
long unsigned int i;

if (ht == NULL)
printf("{}");

printf("{");
for (i = 0; i < ht->size ; i++)
{
temp = ht->array[i];
while (temp != NULL)
{
printf("'%s': '%s' ", temp->key, temp->value);
temp = temp->next;
}
}
printf("}\n");
}
