#include "lists.h"
/**
 * get_dnodeint_at_index - function
 * dlistint_t - dlist
 * @head: head
 * @index: index
 * Return: head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j = 0;

	while (head != NULL)
	{
		if (j == index)
		{
			return (head);
		}
		head = head->next;
		j++;
	}
	return (head);
}
