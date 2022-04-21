#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a node at the end of a linked list
 * @head: pointer to the pointer to the first node
 * @str: string value of the node
 *
 * Return: address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *new, *last = *head;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;
	new->str = strdup(str);
	new->len = len;
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

