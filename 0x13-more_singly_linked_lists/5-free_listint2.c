#include "lists.h"

/**
 * free_listint2 - deletes a list from memory
 * @head: address of address of first node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (!*head)
	{
		*head = NULL;
		return;
	}
	while (temp)
	{
		temp = (*head)->next;
		free(*head);
		if (temp)
			*head = temp;
	}
	*head = NULL;
}
