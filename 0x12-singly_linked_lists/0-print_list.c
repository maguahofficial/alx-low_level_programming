#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the elements of linked list
 * @h: pointer to the list_t list to print
 * Return: The numbers of  the nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t vq = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		vq++;
	}

	return (vq);
}