#include "lists.h"

/**
 * free_listint - deletes a list from memory
 * @head: address of first node
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	if (!head)
		return;
	while (temp)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
