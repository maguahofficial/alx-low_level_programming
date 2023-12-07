#include "lists.h"

/**
 * add_dnodeint_end - The function Adds a new node at the end of a
 * dlistint_t list.
 * @head: (double pointer) pointer to the head of the dlistint_t list.
 * @n: (variable )The integer for the new node to contain.
 * 0x17. C - Doubly linked lists task
 * Return: returns if the function fails - NULL.
 * Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newvrble, *lastvrble;

	newvrble = malloc(sizeof(dlistint_t));
	if (newvrble == NULL)
		return (NULL);

	newvrble->n = n;
	newvrble->next = NULL;

	if (*head == NULL)
	{
		newvrble->prev = NULL;
		*head = newvrble;
		return (newvrble);
	}

	lastvrble = *head;
	while (lastvrble->next != NULL)
		lastvrble = lastvrble->next;
	lastvrble->next = newvrble;
	newvrble->prev = lastvrble;

	return (newvrble);
}
