#include "hash_tables.h"


hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *newtable;

newtable = malloc(sizeof(hash_table_t));
if (newtable == NULL)
return (NULL);

newtable->size = size;

newtable->array = calloc(newtable->size, sizeof(hash_node_t));
if (newtable->array == NULL)
return (NULL);

return (newtable);
}