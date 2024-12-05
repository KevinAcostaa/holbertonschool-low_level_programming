#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - function
 * @str: string
 * @head: head
 * Return: newnodo
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *newnodo;

	for (i = 0; str[i] != '\0'; i++)
	{
	
	}
	newnodo = malloc(sizeof(list_t));

	if (newnodo == NULL)
	{
		return (NULL);
	}
	newnodo->str = strdup(str);
	newnodo->len = i;
	newnodo->next = *head;
	*head = newnodo;

	return (newnodo);
}
