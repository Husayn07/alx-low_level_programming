#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node
 * @head: head
 * @idx: index
 * @n: parameter value
 * Return: return pointer
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *temp, *ptr;
	unsigned int i = 0, l = 0;

	temp = *head;
	while (temp != NULL)
	{
		l++;
		temp = tmp->next;
	}

	if (idx > l)
		return (NULL);

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}

	current = *head;
	for (i = 0; i < idx - 1; i++)
	{
		current = current->next;
	}
	ptr->next = current->next;
	current->next = ptr;
	return (ptr);
}
