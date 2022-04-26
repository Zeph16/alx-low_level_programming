#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a linked list
 * @head: pointer to first node
 *
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (!head)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
