#include "lists.h"


/**
 * pop_listint - this code deletes the head node of a linked list
 * @head: pointer - the first element in the linked list
 *
 * Return: returns the data inside the elements that was deleted,
 * or 0 if the list has nothing
 * 6-pop_listint.c file in the more_singly_linked_lists task
 */
int pop_listint(listint_t **head)
{
	listint_t *tempvariable;
	int numintvar;

	if (!head || !*head)
		return (0);

	numintvar = (*head)->n;
	tempvariable = (*head)->next;
	free(*head);
	*head = tempvariable;

	return (numintvar);
}
