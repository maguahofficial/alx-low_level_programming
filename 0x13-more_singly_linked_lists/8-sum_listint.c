#include "lists.h"

/**
 * sum_listint - this calculates the sum of all the data in a listint_t list
 * @head: first node in linked list
 * 8-sum_listint.c file in the more_singly_linked_lists task
 * Return: return the resulting sum
 */
int sum_listint(listint_t *head)
{
	int sumintvar = 0;
	listint_t *tempvariable = head;

	while (tempvariable)
	{
		sumintvar += tempvariable->n;
		tempvariable = tempvariable->next;
	}

	return (sumintvar);
}
