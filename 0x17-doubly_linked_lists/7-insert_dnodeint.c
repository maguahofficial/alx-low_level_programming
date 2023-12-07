#include "lists.h"

/**
 * insert_dnodeint_at_index - The function inserts a new node in a dlistint_t
 * list a given position.
 * @h: (double pointer) A pointer to the head of the dlistint_t list.
 * @idx: (variable) The position to insert the new node.
 * @n: (variable) The integer for the new node to contain.
 *  0x17. C - Doubly linked lists task
 * Return: Returns if the function fails - NULL.
 * Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmpvrble = *h, *newvrble;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tmpvrble = tmpvrble->next;
		if (tmpvrble == NULL)
			return (NULL);
	}

	if (tmpvrble->next == NULL)
		return (add_dnodeint_end(h, n));

	newvrble = malloc(sizeof(dlistint_t));
	if (newvrble == NULL)
		return (NULL);

	newvrble->n = n;
	newvrble->prev = tmpvrble;
	newvrble->next = tmpvrble->next;
	tmpvrble->next->prev = newvrble;
	tmpvrble->next = newvrble;

	return (newvrble);
}
