#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - code that counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: pointer to the head of the listint_t to check.
 *
 * Return: returns If the list is not looped - 0.
 * Otherwise - number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoisevariable, *harevariable;
	size_t nodessize_tvar = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoisevariable = head->next;
	harevariable = (head->next)->next;

	while (harevariable)
	{
		if (tortoisevariable == harevariable)
		{
			tortoisevariable = head;
			while (tortoisevariable != harevariable)
			{
				nodessize_tvar++;
				tortoisevariable = tortoisevariable->next;
				harevariable = harevariable->next;
			}

			tortoisevariable = tortoisevariable->next;

			while (tortoisevariable != harevariable)
			{
				nodessize_tvar++;
				tortoisevariable = tortoisevariable->next;
                        }
			return (nodessize_tvar);
		}

		tortoisevariable = tortoisevariable->next;
		harevariable = (harevariable->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - code that Prints a listint_t list safely.
 * @head: pointer to the head of the listint_t list.
 *
 * Return: returns the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodessize_tvar2, indexvar = 0;

	nodessize_tvar2 = looped_listint_len(head);

	if (nodessize_tvar2 == 0)
	{
		for (; head != NULL; nodessize_tvar2++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (indexvar = 0; indexvar < nodessize_tvar2; indexvar++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodessize_tvar2);
}
