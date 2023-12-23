#include "hash_tables.h"

/**
 * hash_table_print - the function prints a hash table.
 * @ht: (pointer) to the hash table to print
 * Description: the Key/value pairs are printed in the order
 *  appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nodevrble;
	unsigned long int ivrble;
	unsigned char comma_flagvrble = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (ivrble = 0; ivrble < ht->sizev; ivrble++)
	{
		if (ht->arrayv[ivrble] != NULL)
		{
			if (comma_flagvrble == 1)
				printf(", ");

			nodevrble = ht->arrayv[ivrble];
			while (nodevrble != NULL)
			{
				printf("'%s': '%s'", nodevrble->keyv, nodevrble->valuev);
				nodevrble = nodevrble->nextv;
				if (nodevrble != NULL)
					printf(", ");
			}
			comma_flagvrble = 1;
		}
	}
	printf("}\n");
}
