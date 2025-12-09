#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
int index;
char *value;
index = key_index(key);
value = ht->array[index]->value;
return (value);
}