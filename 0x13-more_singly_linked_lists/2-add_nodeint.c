#include "lists.h"


/**
 * add_nodeint - adds a new node at beginning of a linked list
 * @head: pointer to first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 * 2-add_nodeint.c file in the more_singly_linked_lists task
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newsivar;

	newsivar = malloc(sizeof(listint_t));
	if (!newsivar)
		return (NULL);

	newsivar->n = n;
	newsivar->next = *head;
	*head = newsivar;
	return (newsivar);
}
