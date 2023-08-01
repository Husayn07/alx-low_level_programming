#include "lists.h"

/**
 * add_nodeint_end - add a new node to the end of a linked list
 * @head: head
 * @n: parameter const
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = NULL;
	listint_t *template = NULL;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;
	template = *head;
	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		while (template->next)
		{
			template = template->next;
		}
		template->next = ptr;
	}

	return (*head);
}
