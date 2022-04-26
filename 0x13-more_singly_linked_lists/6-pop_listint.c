#include "lists.h"

/**
 * pop_listint - deletes the first entry of a list and returns its value
 * @head: pointer to the pointer to the first entry
 *
 * Return: the value
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!(*head))
		return 0;
	n = (*head)->n;
	temp = *head;
	*head = temp->next;
	free(temp);
	return n;
}
