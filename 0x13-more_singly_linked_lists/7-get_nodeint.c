#include "lists.h"


/**
 * get_nodeint_at_index - this returns the node at
 * a certain index in a linked list
 * @head: the first node in the linked list
 * @index: of the node to return
 * 7-get_nodeint.c file in the more_singly_linked_lists task alx
 * Return: returns pointer to the node we're looking for, or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int intvariable = 0;
	listint_t *tempvariable = head;

	while (tempvariable && intvariable < index)
	{
		tempvariable = tempvariable->next;
		intvariable++;
	}

	return (tempvariable ? tempvariable : NULL);

}
