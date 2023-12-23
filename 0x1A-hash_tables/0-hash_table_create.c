#include "hash_tables.h"

/**
 * hash_table_create - function creates a hash table.
 * @size: The size of the array.
 * Return: If an error occurs - NULL.
 * Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htvrble;
	unsigned long int ivrble;

	htvrble = malloc(sizeof(hash_table_t));
	if (htvrble == NULL)
		return (NULL);

	htvrble->sizev = size;
	htvrble->arrayv = malloc(sizeof(hash_node_t *) * size);
	if (htvrble->arrayv == NULL)
		return (NULL);
	for (ivrble = 0; ivrble < size; ivrble++)
		htvrble->arrayv[ivrble] = NULL;

	return (htvrble);
}
