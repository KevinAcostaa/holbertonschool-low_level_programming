#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * free_list - function free lists
 * @head: head
 */
void free_list(list_t *head)
{
	list_t *free_list;

	while (head != NULL)
	{
		free_list = head;
		head = head->next;
		free(free_list->str);
		free(free_list);
	}
}
