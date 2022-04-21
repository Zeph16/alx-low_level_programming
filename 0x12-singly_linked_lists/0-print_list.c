#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the value of all nodes of a singly linked list
 * @h: pointer to the first element
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 1;
	list_t *temp = h->next;

	if (h == NULL)
		return (0);

	if (h->str != NULL)
		printf("[%d] %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");

	while (temp != NULL)
	{
		if (temp->str != NULL)
			printf("[%d] %s\n", temp->len, temp->str);
		else
			printf("[0] (nil)\n");
		temp = temp->next;
		nodes++;
	}

	return (nodes);
}
