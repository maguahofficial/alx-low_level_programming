#include "lists.h"
/**
 * print_listint - prints all elements of a linked list
 * @h: linked list of type listint_t to print
 * Return: number of nodes
 * the print_listint file
 */
size_t print_listint(const listint_t *h)
{
	size_t numvar = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numvar++;
		h = h->next;
	}
	return (numvar);
}
