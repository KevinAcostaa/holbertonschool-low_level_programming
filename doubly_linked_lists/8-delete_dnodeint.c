#include "lists.h"
/**
 * delete_dnodeint_at_index - function
 * @head: head
 * @index: index
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;

	while (*head != NULL && count != index -1)
	{
		*head = (*head)->next;
		count++;
	}
}
