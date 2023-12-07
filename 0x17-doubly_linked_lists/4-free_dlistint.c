#include "lists.h"

/**
 * free_dlistint - The function frees a linked dlistint_t list.
 * 0x17. C - Doubly linked lists task
 * @head: (pointer) The head of the dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmpvrble;

	while (head)
	{
		tmpvrble = head->next;
		free(head);
		head = tmpvrble;
	}
}
