#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 * @h: pointer - to the list_t list
 * Return: number of elements in h
 * Project Singly linked lists
 */
size_t list_len(const list_t *h)
{
	size_t xc = 0;

	while (h)
	{
		xc++;
		h = h->next;
	}
	return (xc);
}
