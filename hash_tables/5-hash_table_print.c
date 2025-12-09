#include "hash_tables.h"


void hash_table_print(const hash_table_t *ht)
{
hash_node_t *temp;
long unsigned int i;
int first = 1;

if (ht == NULL)
printf("{}");

printf("{");
for (i = 0; i < ht->size ; i++)
{
temp = ht->array[i];
while (temp != NULL)
{
if (!first)
printf(", ");
printf("'%s': '%s'", temp->key, temp->value);
first = 0;
temp = temp->next;
}
}
printf("}\n");
}
