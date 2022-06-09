#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: pointer to first node
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t total = 0;
	dlistint_t *node = h->next;

	if (!h)
		return (0);
	printf("%d\n", h->n);
	if (!h->next)
		return (1);
	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
		total++;
	}
	return (total);
}

