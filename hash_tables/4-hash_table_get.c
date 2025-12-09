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

if (temp == NULL)
return (NULL);

if(temp != NULL)
while(strcmp(temp->key, key) != 0)
{
temp = temp->next;
if (temp == NULL)
return (NULL);
}

value = temp->value;
if (value == NULL)
return (NULL);

return (value);
}