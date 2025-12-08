#include "hash_tables.h"


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new;

new->key = key;
new->value = value;

index = key_index(key, ht->size);

ht->array[index] = new;

}
