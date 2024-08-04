#include "lists.h"
/**
 * sum_dlistint - function return the sum
 * @head: head
 * Return: return num
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		if (head->n != 0)
		{
			sum += (head->n);
		}
		head = head->next;
	}

	return (sum);
}
