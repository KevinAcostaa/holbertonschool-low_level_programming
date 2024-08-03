#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - add new_node at the end
 * @head: head
 * @str: string
 * Return: return new_node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *new_node;
	list_t *end = *head;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
		{
			return (NULL);
		}

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (end->next != NULL)
		{
			end = end->next;
		}

		end->next = new_node;
	}
	return (new_node);
}
