#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create -this function creates a sorted hash table.
 * @size: (variable) size of new sorted hash table.
 * Return: returns null if an error occurs
 * Otherwise - it returns a pointer to the new sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *htvrble;
	unsigned long int ivrble;

	htvrble = malloc(sizeof(shash_table_t));
	if (htvrble == NULL)
		return (NULL);

	htvrble->sizev = size;
	htvrble->arrayv = malloc(sizeof(shash_node_t *) * size);
	if (htvrble->arrayv == NULL)
		return (NULL);
	for (ivrble = 0; ivrble < size; ivrble++)
		htvrble->arrayv[ivrble] = NULL;
	htvrble->sheadv = NULL;
	htvrble->stailv = NULL;

	return (htvrble);
}

/**
 * shash_table_set - this function adds an element to a sorted hash table.
 * @ht: (pointer) to the sorted hash table.
 * @key: (pointer) key to add - cannot be an empty string.
 * @value: (pointer)The value associated with key.
 * Return: returns 0 when is fails
 * Otherwise - 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *newvrble, *tmpvrble;
	char *value_copyvrble;
	unsigned long int indexvrble;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copyvrble = strdup(value);
	if (value_copyvrble == NULL)
		return (0);

	indexvrble = key_index((const unsigned char *)key, ht->sizev);
	tmpvrble = ht->sheadv;
	while (tmpvrble)
	{
		if (strcmp(tmpvrble->keyv, key) == 0)
		{
			free(tmpvrble->valuev);
			tmpvrble->valuev = value_copyvrble;
			return (1);
		}
		tmpvrble = tmpvrble->snextv;
	}

	newvrble = malloc(sizeof(shash_node_t));
	if (newvrble == NULL)
	{
		free(value_copyvrble);
		return (0);
	}
	newvrble->keyv = strdup(key);
	if (newvrble->keyv == NULL)
	{
		free(value_copyvrble);
		free(newvrble);
		return (0);
	}
	newvrble->valuev = value_copyvrble;
	newvrble->nextv = ht->arrayv[indexvrble];
	ht->arrayv[indexvrble] = newvrble;

	if (ht->sheadv == NULL)
	{
		newvrble->sprevv = NULL;
		newvrble->snextv = NULL;
		ht->sheadv = newvrble;
		ht->stailv = newvrble;
	}
	else if (strcmp(ht->sheadv->keyv, key) > 0)
	{
		newvrble->sprevv = NULL;
		newvrble->snextv = ht->sheadv;
		ht->sheadv->sprevv = newvrble;
		ht->sheadv = newvrble;
	}
	else
	{
		tmpvrble = ht->sheadv;
		while (tmpvrble->snextv != NULL && strcmp(tmpvrble->snextv->keyv, key) < 0)
			tmpvrble = tmpvrble->snextv;
		newvrble->sprevv = tmpvrble;
		newvrble->snextv = tmpvrble->snextv;
		if (tmpvrble->snextv == NULL)
			ht->stailv = newvrble;
		else
			tmpvrble->snextv->sprevv = newvrble;
		tmpvrble->snextv = newvrble;
	}

	return (1);
}

/**
 * shash_table_get - this function retrieves the value associated with
 * the key in a sorted hash table.
 * @ht: (pointer) to the sorted hash table.
 * @key: (pointer) key to get the value of.
 * Return: return null ff the key cannot be matched
 * Otherwise - returns the value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *nodevrble;
	unsigned long int indexvrble;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	indexvrble = key_index((const unsigned char *)key, ht->sizev);
	if (indexvrble >= ht->sizev)
		return (NULL);

	nodevrble = ht->sheadv;
	while (nodevrble != NULL && strcmp(nodevrble->keyv, key) != 0)
		nodevrble = nodevrble->snextv;

	return ((nodevrble == NULL) ? NULL : nodevrble->valuev);
}

/**
 * shash_table_print - this function prints a sorted hash table in order.
 * @ht: (pointer) to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *nodevrble;

	if (ht == NULL)
		return;

	nodevrble = ht->sheadv;
	printf("{");
	while (nodevrble != NULL)
	{
		printf("'%s': '%s'", nodevrble->keyv, nodevrble->valuev);
		nodevrble = nodevrble->snextv;
		if (nodevrble != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - this function prints a sorted hash table
 * in reverse order.
 * @ht: (pointer) to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *nodevrble;

	if (ht == NULL)
		return;

	nodevrble = ht->stailv;
	printf("{");
	while (nodevrble != NULL)
	{
		printf("'%s': '%s'", nodevrble->keyv, nodevrble->valuev);
		nodevrble = nodevrble->sprevv;
		if (nodevrble != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - this function deletes a sorted hash table.
 * @ht: (pointer) to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *headvrble = ht;
	shash_node_t *nodevrble, *tmpvrble;

	if (ht == NULL)
		return;

	nodevrble = ht->sheadv;
	while (nodevrble)
	{
		tmpvrble = nodevrble->snextv;
		free(nodevrble->keyv);
		free(nodevrble->valuev);
		free(nodevrble);
		nodevrble = tmpvrble;
	}

	free(headvrble->arrayv);
	free(headvrble);
}
