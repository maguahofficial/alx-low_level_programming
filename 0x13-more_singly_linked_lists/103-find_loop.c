#include "lists.h"

/**
 * find_listint_loop - code that finds the loop in a linked list
 * @head: the linked list to search for
 * 103-find_loop.c file from the more_singly_linked_lists task
 * Return: returns the address of the node where loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slowlistintvar = head;
	listint_t *fastlistintvar = head;

	if (!head)
		return (NULL);

	while (slowlistintvar && fastlistintvar && fastlistintvar->next)
	{
		fastlistintvar = fastlistintvar->next->next;
		slowlistintvar = slowlistintvar->next;
		if (fastlistintvar == slowlistintvar)
		{
			slowlistintvar = head;
			while (slowlistintvar != fastlistintvar)
			{
				slowlistintvar = slowlistintvar->next;
				fastlistintvar = fastlistintvar->next;
			}
			return (fastlistintvar);
		}
	}
	return (NULL);
}
