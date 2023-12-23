#include "hash_tables.h"

/**
 * hash_table_get - function retrieves value associated with
 * a key in a hash table.
 * @ht: (pointer) to the hash table.
 * @key: (pointer) key to get the value
 * Return: returns if the key cannot be matched - NULL.
 * else - returns the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nodevrble;
	unsigned long int indexvrble;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	indexvrble = key_index((const unsigned char *)key, ht->sizev);
	if (indexvrble >= ht->sizev)
		return (NULL);

	nodevrble = ht->arrayv[indexvrble];
	while (nodevrble && strcmp(nodevrble->keyv, key) != 0)
		nodevrble = nodevrble->nextv;

	return ((nodevrble == NULL) ? NULL : nodevrble->valuev);

}
