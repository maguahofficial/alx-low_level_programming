#include "hash_tables.h"

/**
 * key_index - (function) Get index at which a key/value
 * pair should be stored in a array of a hash table.
 * @key: (pointer) key to get the index of.
 * @size: (variable) size of the array of the hash table
 * Return: returns index of the key.
 * Description: this uses  djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
