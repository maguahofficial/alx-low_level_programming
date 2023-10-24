#include "lists.h"


/**
 * reverse_listint - the code reverses a linked list
 * @head: pointer to the first node in list
 *
 * Return: reruns pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previewvar = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previewvar;
		previewvar = *head;
		*head = next;
	}

	*head = previewvar;
	return (*head);
}
