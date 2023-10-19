#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 * Project Singly linked lists
 */
void free_list(list_t *head)
{
	list_t *tempvq;

	while (head)
	{
		tempvq = head->next;
		free(head->str);
		free(head);
		head = tempvq;
	}
}
