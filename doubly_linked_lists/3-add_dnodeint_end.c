#include "lists.h"
/**
 * add_dnodeint_end - function
 * dlistint_t - function
 * @head: head
 * @n: n
 * Return: newnode
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *ptr = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	if (head != NULL && *head != NULL)
	{
		for (ptr = *head; ptr->next != NULL; ptr = ptr->next)
		{}
	}

	newnode->n = n;
	newnode->next = NULL;
	if (ptr == NULL)
	{
		*head = newnode;
	}
	else
	{
		newnode->prev = ptr;
		ptr->next  = newnode;
	}
	return (newnode);
}
