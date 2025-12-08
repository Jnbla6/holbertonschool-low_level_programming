#include "hash_tables.h"

/**
 * key_index - Computes the index for a given key in the hash table.
 * @key: The key to be hashed.
 * @size: The size of the hash table array.
 *
 * Return: The index at which the key/value pair should be stored in the array.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

return (hash_djb2(key) % size);

}
