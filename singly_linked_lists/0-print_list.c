#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - function
 * @h: pointer
 * Return: count
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h-> == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
