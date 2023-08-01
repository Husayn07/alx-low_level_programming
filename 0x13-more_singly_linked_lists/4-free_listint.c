#include "lists.h"

/**
 * free_listint - free list
 * @head: head
 * Return: NULL
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while ((ptr = head) != NULL)
	{
		head = head->next;
		free(ptr);
	}
}
