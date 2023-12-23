#include "hash_tables.h"

/**
 * hash_table_set - function adds or updates an element in a hash table.
 * @ht: (pointer)  to the hash table.
 * @key: (pointer) key to add - cant be an empty string.
 * @value: (pointer)value associated with key.
 * Return: returns if is  fails - 0.
 * otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newvrble;
	char *value_copyvrble;
	unsigned long int indexvrble, ivrble;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copyvrble = strdup(value);
	if (value_copyvrble == NULL)
		return (0);

	indexvrble= key_index((const unsigned char *)key, ht->sizev);
	for (ivrble = indexvrble; ht->arrayv[ivrble]; ivrble++)
	{
		if (strcmp(ht->arrayv[ivrble]->keyv, key) == 0)
		{
			free(ht->arrayv[ivrble]->valuev);
			ht->arrayv[ivrble]->valuev = value_copyvrble;
			return (1);
		}
	}

	newvrble = malloc(sizeof(hash_node_t));
	if (newvrble == NULL)
	{
		free(value_copyvrble);
		return (0);
	}
	newvrble->keyv = strdup(key);
	if (newvrble->keyv == NULL)
	{
		free(newvrble);
		return (0);
	}
	newvrble->valuev = value_copyvrble;
	newvrble->nextv = ht->arrayv[indexvrble];
	ht->arrayv[indexvrble] = newvrble;

	return (1);
}
