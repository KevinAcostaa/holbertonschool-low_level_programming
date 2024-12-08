#include "lists.h"
/**
 * insert_dnodeint_at_index - function
 * dlistint_t - dlist
 * @h: pointer
 * @idx: index
 * @n: number
 * Return: newnode
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *ptr = *h;
	unsigned int count = 0;

	if (idx == 0 || h == NULL)
		return (add_dnodeint(h, n));

	for (; ptr->next != NULL && count < idx - 1; count++, ptr = ptr->next)
	{
	}
	if (ptr->next == NULL)
	{
		if (count < idx - 1)
			return (NULL);
		return (add_dnodeint_end(h, n));
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = ptr->next;
	newnode->prev = ptr;
	if (ptr->next != NULL)
	{
		ptr->next->prev = newnode;
	}
	ptr->next = newnode;

	return (newnode);


}
