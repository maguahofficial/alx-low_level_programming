#include "lists.h"


/**
 * insert_nodeint_at_index - this code inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: the index where the new node is added
 * @n: the data to insert in the new node
 * 9-insert_nodeint.c file in the more_singly_linked_lists task
 * Return: returns pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int intvariable;
	listint_t *newvariable;
	listint_t *tempvariable = *head;

	newvariable = malloc(sizeof(listint_t));

	if (!newvariable || !head)
		return (NULL);

	newvariable->n = n;
	newvariable->next = NULL;

	if (idx == 0)
	{
		newvariable->next = *head;
		*head = newvariable;
		return (newvariable);
	}

	for (intvariable = 0; tempvariable && intvariable < idx; intvariable++)
	{
		if (intvariable == idx - 1)
		{
			newvariable->next = tempvariable->next;
			tempvariable->next = newvariable;
			return (newvariable);
		}
		else
			tempvariable = tempvariable->next;
	}

	return (NULL);
}
