#include "lists.h"


/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newvariable;
	listint_t *tempvariable = *head;

	newvariable = malloc(sizeof(listint_t));

	if (!newvariable)
		return (NULL);

	newvariable->n = n;
	newvariable->next = NULL;
	if (*head == NULL)
	{
		*head = newvariable;
		return (newvariable);
	}

	while (tempvariable->next)
		tempvariable = tempvariable->next;

	tempvariable->next = newvariable;

	return (newvariable);
}
