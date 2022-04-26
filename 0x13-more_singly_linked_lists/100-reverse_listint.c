#include "lists.h"

/**
  * reverse_listint - reverses a list
  * @head: the pointer to pointer to the first node
  *
  * Return: the new head
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *current;

	temp = NULL;
	current = NULL;
	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		current->next = temp;
		temp = current;
	}
	*head = current;

	return (*head);
}
