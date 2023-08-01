#include "lists.h"

/**
 * pop_listint - pop out head of a linked list
 * @head: head
 * Return: head adds
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr2;
	listint_t *ptr;

	if (*head == NULL)
		return (0);

	ptr = *head;

	n = ptr->n;

	ptr2 = ptr->next;

	free(ptr);

	*head = ptr2;

	return (n);
}
