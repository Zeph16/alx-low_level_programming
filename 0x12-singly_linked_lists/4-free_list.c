#include "lists.h"

/**
 * free_list - deletes a list from memory
 * @head: address of first node
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	if (!head)
		return;
	while (temp)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
	free(head);
}
