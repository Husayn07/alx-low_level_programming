#include "lists.h"

/**
 * add_node_end - adds a n node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *b;
	size_t a;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n->str = strdup(str);

	for (a = 0; str[a]; a++)
		;

	n->len = a;
	n->next = NULL;
	b = *head;

	if (b == NULL)
	{
		*head = n;
	}
	else
	{
		while (b->next != NULL)
			b = b->next;
		b->next = n;
	}

	return (*head);
}
