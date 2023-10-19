#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 * Project Singly linked lists
 */
void free_list(list_t *head)
{
 list_t *tempv;

 while (head)
 {
 tempv = head->next;
 free(head->str);
 free(head);
 head = tempv;
 }
}
