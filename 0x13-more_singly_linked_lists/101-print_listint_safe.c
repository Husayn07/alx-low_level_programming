#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *template = NULL;
	listp_t *ptr = NULL;

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

/**
 * print_listint_safe - print list.
 * @head: head
 * Return: node list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	listp_t *ptr, *nptr, *ptra;

	ptr = NULL;
	while (head)
	{
		nptr = malloc(sizeof(listp_t));

		if (nptr == NULL)
			exit(98);

		nptr->p = (void *)head;
		nptr->next = ptr;
		ptr = nptr;

		ptra = ptr;

		while (ptra->next != NULL)
		{
			ptra = add->next;
			if (head == ptra->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&ptr);
				return (count);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}

	free_listp(&ptr);
	return (count);
}
