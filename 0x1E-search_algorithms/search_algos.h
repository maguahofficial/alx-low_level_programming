#ifndef _SORTING_ALGOS_H
#define _SORTING_ALGOS_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - The singly linked list
 * @n: integer Variable
 * @index: The index of the node in the list
 * @next: (Array)the pointer to the next node
 *
 * Description: Its a singly linked list node for alx project
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - this is a singly linked list with an express lane
 *
 * @n: Integer variable
 * @index: The Index of the node in the list
 * @next: The pointer to the next node
 * @express: The pointer to the next node in the express lane
 *
 * Description: The singly linked list node with an express lane
 * for Holberton project
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
