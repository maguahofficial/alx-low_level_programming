#include "lists.h"

/**
 * sum_dlistint - The function sums all the data of a dlistint_t list.
 * @head: (pointer) The head of the dlistint_t list.
 *  0x17. C - Doubly linked lists task
 * Return: Returns the sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sumvrble = 0;

	while (head)
	{
		sumvrble += head->n;
		head = head->next;
	}

	return (sumvrble);
}
