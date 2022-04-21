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
	list_t *temp;

	if (!h)
		return (0);
	temp = h->next;

	if (h->str)
		printf("[%d] %s\n", h->len, h->str);
	else
	{
		printf("[0] (nil)\n");
		nodes = 0;
	}

	while (temp)
	{
		if (temp->str)
			printf("[%d] %s\n", temp->len, temp->str);
		else
			printf("[0] (nil)\n");
		temp = temp->next;
		nodes++;
	}

	return (nodes);
}
