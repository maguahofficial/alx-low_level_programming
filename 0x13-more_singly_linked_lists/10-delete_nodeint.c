#include "lists.h"

/**
 * delete_nodeint_at_index - code that deletes a node in a
 * linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: the index of the node to delete
 * 10-delete_nodeint.c file in the more_singly_linked_lists task
 * Return: returns 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempvariable = *head;
	listint_t *currentlistintvar = NULL;
	unsigned int intvar = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempvariable);
		return (1);
	}

	while (intvar < index - 1)
	{
		if (!tempvariable || !(tempvariable->next))
			return (-1);

		tempvariable = tempvariable->next;
		intvar++;
	}

	currentlistintvar = tempvariable->next;
	tempvariable->next = currentlistintvar->next;
	free(currentlistintvar);

	return (1);
}
