#include "lists.h"
/**
 * free_dlistint - function
 * dlistint_t - dlist
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	free_dlistint(head->next);
	free(head);
}
