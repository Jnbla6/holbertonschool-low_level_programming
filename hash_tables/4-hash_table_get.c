#include "hash_tables.h"

char *hash_table_get(const hash_table_t *ht, const char *key)
{
int index;
char *value;
index = key_index((unsigned char *)key , 1024);
value = ht->array[index]->value;
return (value);
}