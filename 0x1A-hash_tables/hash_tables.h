#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - function node of a hash table
 * @keyv: (variable) the key, string
 * key is unique in the HashTable
 * @valuev: (variable) The value corresponding to a key
 * @nextv: (variable)pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *keyv;
	char *valuev;
	struct hash_node_s *nextv;
} hash_node_t;

/**
 * struct hash_table_s - function hash table data structure
 * @sizev: (variable) The size of the array
 * @arrayv: (variable) An array of size
 */
typedef struct hash_table_s
{
	unsigned long int sizev;
	hash_node_t **arrayv;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

/**
 * struct shash_node_s - function node of a sorted hash table
 * @keyv: (pointer)The key, string
 * @valuev: (pointer) value corresponding to a key
 * @nextv: (pointer) pointer to the next node of the List
 * @sprevv: (pointer) pointer to the previous element of the sorted linked list
 * @snextv: (pointer) pointer to the next element of the sorted linked list
 */
typedef struct shash_node_s
{
	char *keyv;
	char *valuev;
	struct shash_node_s *nextv;
	struct shash_node_s *sprevv;
	struct shash_node_s *snextv;
} shash_node_t;

/**
 * struct shash_table_s - function sorted hash table data structure
 * @sizev: (variable) The size of the array
 * @arrayv: (double pointer) An array of size @size
 * @sheadv: (pointer) pointer to the first element of the sorted linked list
 * @stailv: (pointer) pointer to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
	unsigned long int sizev;
	shash_node_t **arrayv;
	shash_node_t *sheadv;
	shash_node_t *stailv;
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

#endif
#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - function node of a hash table
 * @keyv: (pointer)the key, string
 * @valuev: (pointer)value corresponding to a key
 * @nextv: (pointer) the pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *keyv;
	char *valuev;
	struct hash_node_s *nextv;
} hash_node_t;

/**
 * struct hash_table_s - function hash tble data structure
 * @sizev: (variable) The size of the array
 * @arrayv: (double pointer) An array of size @size
 */
typedef struct hash_table_s
{
	unsigned long int sizev;
	hash_node_t **arrayv;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

/**
 * struct shash_node_s - function node of a sorted hash table
 * @keyv: (pointer) the key, strinfgff
 * @valuev: (pointer)The value corresponding to a key
 * @nextv: (pointer)pointer to the next node of the List
 * @sprevv: (pointer)pointer to the previous element of the sorted linked list
 * @snextv: (pointer) A pointer to the next element of the sorted linked list
 */
typedef struct shash_node_s
{
	char *keyv;
	char *valuev;
	struct shash_node_s *nextv;
	struct shash_node_s *sprevv;
	struct shash_node_s *snextv;
} shash_node_t;

/**
 * struct shash_table_s - function sorted hash table data structure
 * @sizev: (variable) The size of the array
 * @arrayv: (double pointer) An array of size @size
 * @sheadv: (pointer) pointer to the first element of the sorted linked list
 * @stailv:(pointer) pointer to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
	unsigned long int sizev;
	shash_node_t **arrayv;
	shash_node_t *sheadv;
	shash_node_t *stailv;
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

#endif
