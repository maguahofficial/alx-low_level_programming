#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function prints all elements of a list.
 * @h: (pointer) the list_t list
 *  0x17. C - Doubly linked lists task
 * Return: returns the number of nodes in h.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodesvarble = 0;

	while (h)
	{
		nodesvarble++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodesvarble);
}
