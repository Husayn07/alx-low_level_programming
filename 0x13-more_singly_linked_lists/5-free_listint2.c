#include "lists.h"

/**
 * free_listint2 - free list
 * @head: head
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *template;
	listint_t *ptr;

	if (head)
	{
		ptr = *head;
		while ((template = ptr) != NULL)
		{
			ptr = ptr->next;
			free(template);
		}
		*head = NULL;
	}
}
