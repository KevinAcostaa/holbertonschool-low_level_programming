#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - function
 * @head: head
 * @str: string
 * Return: return new
 */
list_t *add_node(list_t **head, const char *str)
{
	int j;
	list_t *new_node;

	for (j = 0; str[j] != '\0'; j++)
	{
	}
	new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
		{
			return (NULL);
		}

	new_node->str = strdup(str);
	new_node->len = j;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
