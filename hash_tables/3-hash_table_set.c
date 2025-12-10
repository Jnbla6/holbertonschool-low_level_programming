#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add the element to.
 * @key: The key of the element.
 * @value: The value associated with the key.
 *
 * Return: 1 if successful, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *node;
char *value_dup;
if (!ht || !key || *key == '\0' || !value)
return (0);
index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];
while (node)
{
if (strcmp(node->key, key) == 0)
{
value_dup = strdup(value);
if (!value_dup)
return (0);
free(node->value);
node->value = value_dup;
return (1);
}
node = node->next;
}
node = malloc(sizeof(hash_node_t));
if (!node)
return (0);
node->key = strdup(key);
if (!node->key)
{
free(node);
return (0);
}
node->value = strdup(value);
if (!node->value)
{
free(node->key);
free(node);
return (0);
}
node->next = ht->array[index];
ht->array[index] = node;
return (1);
}
