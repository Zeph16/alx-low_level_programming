#include "lists.h"

/**
 * add_node - adds a node at the beginning of a linked list
 * @head: pointer to the pointer to the first node
 * @str: string value of the node
 *
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;
	new->str = malloc(sizeof(char) * len);
	if (!new->str)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}

