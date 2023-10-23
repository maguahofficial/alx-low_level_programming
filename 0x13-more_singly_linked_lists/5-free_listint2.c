#include "lists.h"


/**
 * free_listint2 - it frees a linked list
 *
 * @head: pointer to the listint_t list to be freed
 * 5-free_listint2.c file in the more_singly_linked_lists task
 */
void free_listint2(listint_t **head)
{
	listint_t *tempvariable;

	if (head == NULL)
		return;

	while (*head)
	{
		tempvariable = (*head)->next;
		free(*head);
		*head = tempvariable;
	}

	*head = NULL;
}
