#include "lists.h"

/**
 * free_listint_safe - code that frees a linked list
 * @h: pointer to the first node in linked list
 * 102-free_listint_safe.c file in thw more_singly_linked_liststask
 * Return: returns the number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lensize_tvar = 0;
	int diffintvar;
	listint_t *tempvariable;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diffintvar = *h - (*h)->next;

		if (diffintvar > 0)
		{
			tempvariable = (*h)->next;
			free(*h);
			*h = tempvariable;
			lensize_tvar++;
		}

		else
		{
			free(*h);
			*h = NULL;
			lensize_tvar++;
			break;
		}
	}

	*h = NULL;
	return (lensize_tvar);
}
