#include "lists.h"

/**
 * free_listint2 - deletes a list from memory
 * @head: address of address of first node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;
	while (head)
	{
		temp = *head;
		head = temp->next;
		free(temp);
	}
}
