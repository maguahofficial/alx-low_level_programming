#include "lists.h"


/**
 * free_listint - it frees a linked list
 * @head: listint_t the list to be freed
 *the 4-free_listint.c file in the 0x13-more_singly_linked_lists task
 */
void free_listint(listint_t *head)
{
	listint_t *tempvariable;

	while (head)
	{
		tempvariable = head->next;
		free(head);
		head = tempvariable;
	}
}
