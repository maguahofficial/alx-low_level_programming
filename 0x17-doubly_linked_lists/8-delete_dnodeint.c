#include "lists.h"

/**
 * delete_dnodeint_at_index - The function deletes a node from a dlistint_t
 * at a given index.
 * @head: (double pointer) A pointer to the head of the dlistint_t.
 * @index: (variable) The index of the node to delete.
 *  0x17. C - Doubly linked lists task
 * Return: This returns Upon success - 1.
 * Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmpvrble = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (tmpvrble == NULL)
			return (-1);
		tmpvrble = tmpvrble->next;
	}

	if (tmpvrble == *head)
	{
		*head = tmpvrble->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		tmpvrble->prev->next = tmpvrble->next;
		if (tmpvrble->next != NULL)
			tmpvrble->next->prev = tmpvrble->prev;
	}

	free(tmpvrble);
	return (1);
}
