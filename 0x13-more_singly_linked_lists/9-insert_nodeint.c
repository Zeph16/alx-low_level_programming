#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given index
 * @head: pointer to the pointer to the first node
 * @idx: the given index
 * @n: value of the node
 *
 * Return: address of the inserted node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp = *head;
	unsigned int i = 0;

	if (!(*head))
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	while (temp)
	{
		if (i == idx - 1)
			break;
		temp = temp->next;
		i++;
	}
	if (i != idx - 1)
		return (NULL);
	if (temp->next)
		node->next = temp->next;
	temp->next = node;
	return (node);
}

