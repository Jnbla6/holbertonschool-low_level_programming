#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
int index;
char *value;
hash_node_t *temp;
if(ht == NULL || key == NULL)
return (NULL);

index = key_index((unsigned char *)key , ht->size);

temp = ht->array[index];

if(temp->next != NULL)
{
while(temp->key != key)
temp = temp->next;
if (temp->key == NULL)
return (NULL);
}

value = temp->value;
if (value == NULL)
return (NULL);

return (value);
}