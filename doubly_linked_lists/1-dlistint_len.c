#include "lists.h"
/**
 * dlistint_len - return count
 * dlistint_t - function
 * @h: pointer
 * Return: count
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{

		h = h->next;
		count++;
	}
	return (count);
}
