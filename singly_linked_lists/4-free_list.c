#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * free_list - fucntion free list
 * @head: head
 */
void free_list(list_t *head)
{
	list_t *lib;

	while (head != NULL)
	{
		lib = head;
		head = head->next;
		free(lib->str);
		free(lib);
	}
}
