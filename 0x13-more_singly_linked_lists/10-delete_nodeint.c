#include "lists.h"

/**
 * delete_nodeint_at_index - delete node of an index
 * @head: head
 * @index: index of node to be deleted
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr0;
	listint_t *ptr1;

	ptr0 = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && ptr0 != NULL; i++)
		{
			ptr0 = prev->ptr1;
		}
	}

	if (ptr0 == NULL || (prev->ptr1 == NULL && index != 0))
	{
		return (-1);
	}

	ptr1 = ptr0->next;

	if (index != 0)
	{
		ptr0->ptr1 = next->next;
		free(ptr1);
	}
	else
	{
		free(ptr0);
		*head = ptr1;
	}

	return (1);
}
