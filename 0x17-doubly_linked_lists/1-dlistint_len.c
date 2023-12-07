#include "lists.h"

/**
 * dlistint_len - The function counts the number of elements in a
 * linked dlistint_t list.
 * @h: (pointer) The head of the dlistint_t list.
 *  0x17. C - Doubly linked lists task
 * Return: returns the number of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodesvrble = 0;

	while (h)
	{
		nodesvrble++;
		h = h->next;
	}

	return (nodesvrble);
}
