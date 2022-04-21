#include "lists.h"

/**
 * list_len - returns the length of a linked list
 * @h: address of the first node
 *
 * Return: the length
 */
size_t list_len(const list_t *h)
{
	int len = 1;
	list_t temp;

	if (!h)
		return (0);
	temp = h->next;
	while (temp)
	{
		len++;
		temp = temp->next;
	}

	return (len);
}
