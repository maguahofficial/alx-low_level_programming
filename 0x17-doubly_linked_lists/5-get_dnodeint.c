#include "lists.h"

/**
 * get_dnodeint_at_index - The function locates a node in a dlistint_t list.
 * @head: (pointer) The head of the dlistint_t list.
 * @index: (variable) The node to locate.
 * 0x17. C - Doubly linked lists task
 * Return: If the node does not exist - NULL.
 * Otherwise - the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
