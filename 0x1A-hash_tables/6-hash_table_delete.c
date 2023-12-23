#include "hash_tables.h"

/**
 * hash_table_delete - function deletes a hash table.
 * @ht: (pointer) to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *headvrble = ht;
	hash_node_t *nodevrble, *tmpvrble;
	unsigned long int ivrble;

	for (ivrble = 0; ivrble < ht->sizev; ivrble++)
	{
		if (ht->arrayv[ivrble] != NULL)
		{
			nodevrble = ht->arrayv[ivrble];
			while (nodevrble != NULL)
			{
				tmpvrble = nodevrble->nextv;
				free(nodevrble->keyv);
				free(nodevrble->valuev);
				free(nodevrble);
				nodevrble = tmpvrble;
			}
		}
	}
	free(headvrble->arrayv);
	free(headvrble);
}
