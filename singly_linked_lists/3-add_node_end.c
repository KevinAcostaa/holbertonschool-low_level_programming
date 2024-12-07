#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - add node end
 * @head: head
 * @str: string
 * Return: newnodo
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int j;
	list_t *newnodo;
	list_t *end = *head;

	for (j = 0; str[j] != '\0'; j++)
	{
	}
	newnodo = malloc(sizeof(list_t));
		if (newnodo == NULL)
		{
			return (NULL);
		}

	newnodo->str = strdup(str);
	newnodo->len = j;
	newnodo->next = NULL;
	if (*head == NULL)
	{
		*head = newnodo;
	}
	else
	{
		while (end->next != NULL)
		{
			end = end->next;
		}

		end->next = newnodo;
	}
	return (newnodo);
}
