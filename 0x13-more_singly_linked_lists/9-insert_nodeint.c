#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at nth podition
 * @head: head
 * @idx: index for new node position
 * @n: parameter value
 * Return: address or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr;
	listint_t *ptr2

	ptr2 = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && ptr2 != NULL; i++)
		{
			ptr2 = ptr2->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
	}
	else
	{
		ptr->next = ptr2->next;
		ptr2->next = ptr;
	}

	return (ptr);
}
