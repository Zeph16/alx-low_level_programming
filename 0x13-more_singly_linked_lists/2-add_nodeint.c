#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a linked list
 * @head: pointer to the pointer to the first node
 * @n: int value of the node
 *
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

