#include "lists.h"

/**
 * free_listint2 - deletes a list from memory
 * @head: address of first node
 */
void free_listint2(listint_t *head)
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
	head = NULL;
}
