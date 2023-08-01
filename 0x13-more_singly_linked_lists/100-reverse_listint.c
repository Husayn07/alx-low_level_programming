#include "lists.h"

/**
 * reverse_listint - reverse a list.
 * @head: head
 * Return: pointer to head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = NULL;
	listint_t *pt = NULL;

	while (*head != NULL)
	{
		ptr = (*head)->next;
		(*head)->next = pt;
		pt = *head;
		*head = ptr;
	}

	*head = pt;
	return (*head);
}
