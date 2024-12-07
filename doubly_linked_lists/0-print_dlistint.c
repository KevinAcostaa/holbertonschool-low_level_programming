#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_dlistint - print linked list
 * dlistint_t - function
 * @h: pointer
 * Return: count
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{

		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
