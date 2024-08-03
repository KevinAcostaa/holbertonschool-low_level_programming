#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * list_len - list-len
 * list_t - list_t
 * @h: pointer a head
 * Return: return count
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
