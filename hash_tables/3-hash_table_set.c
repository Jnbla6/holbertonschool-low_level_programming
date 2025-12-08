#include "hash_tables.h"


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new, *temp;

if (ht == NULL || key == NULL || value == NULL)
return (0);

index = key_index((unsigned char *)key, ht->size);

temp = ht->array[index];
while(temp != NULL)
{
if (temp->key == NULL)
{
temp->key = strdup(key);
temp->value = strdup(value);
return(1);
}
temp = temp->next;
}

new = malloc(sizeof(hash_node_t));
if (new == NULL)
return (0);

new->key = strdup(key);
if (new->key == NULL)
return(0);

new->value = strdup(value);
if (new->value == NULL)
return(0);

new->next = ht->array[index];
ht->array[index] = new;

return (1);

}
