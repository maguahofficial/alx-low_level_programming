#include "lists.h"

/**
 * add_dnodeint - Function adds a new node at the beginning
 * of a dlistint_t list.
 * @head: (double pointer)A pointer to the head of the dlistint_t list.
 * @n: (variable)The integer for the new node to contain.
 * 0x17. C - Doubly linked lists task
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newvrble;

	newvrble = malloc(sizeof(dlistint_t));
	if (newvrble == NULL)
		return (NULL);

	newvrble->n = n;
	newvrble->prev = NULL;
	newvrble->next = *head;
	if (*head != NULL)
		(*head)->prev = newvrble;
	*head = newvrble;

	return (newvrble);
}
