#include "hash_tables.h"

/**
 * hash_djb2 - function hash function implementing the djb2 algorithm.
 * @str: (pointer) string to hash.
 * Return: returns the calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hashvrble;
	int cvrble;

	hashvrble = 5381;
	while ((cvrble = *str++))
		hashvrble = ((hashvrble << 5) + hashvrble) + cvrble;

	return (hashvrble);
}
