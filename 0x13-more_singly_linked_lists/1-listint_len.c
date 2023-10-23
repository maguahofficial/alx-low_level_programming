#include "lists.h"


/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: the number of nodes
 * listint_len.c file more_singly_linked_lists task
 */
size_t listint_len(const listint_t *h)
{
	size_t numvariable = 0;

	while (h)
	{
		numvariable++;
		h = h->next;
	}

	return (numvariable);
}
