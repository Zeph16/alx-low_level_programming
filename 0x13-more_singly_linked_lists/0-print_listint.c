#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints the value of all nodes of a singly linked list
 * @h: pointer to the first element
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 1;
	listint_t *temp;

	if (!h)
		return (0);
	temp = h->next;

	printf("%d\n", h->n);

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		nodes++;
	}

	return (nodes);
}
