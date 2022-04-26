#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the pointer to the first node
 * @n: int value of the node
 *
 * Return: address of the new node
 */

listint_t *add_nodeint_end(list_t **head, const int n)
{
	listint_t *new, *last = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
		last = last->next;

	last->next = new;

	return (new);
}

