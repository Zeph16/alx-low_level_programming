#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at the given index
 * @head: pointer to the first node
 * @index: the given index
 *
 * Return: the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	if (!head)
		return(NULL);
	if (index == 0)
		return(head);
	while (temp)
	{
		temp = temp->next;
		i++;
		if (i == index)
			break;
	}
	if (i != index)
		return (NULL);
	return (temp);
}
