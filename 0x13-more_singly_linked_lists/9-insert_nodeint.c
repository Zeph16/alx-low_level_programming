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
	listint_t *new_node, *temp;
	unsigned int count;

	temp = *head;

	count = 0;
	while (temp && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		if (idx == 0)
		{
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}
		if (count + 1 == idx)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
	}
	free(new_node);
	return (NULL);
}
