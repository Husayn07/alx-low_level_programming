#include "lists.h"

/**
 * sum_listint - returns the sum of data in a linked list.
 * @head: head
 * Return: sum total
 */
int sum_listint(listint_t *head)
{
	int a = 0;

	while (head)
	{
		a += head->n;
		head = head->next;
	}

	return (a);
}
