#include "lists.h"
/**
 * print_dlistint - print a doubly linked list
 * @h: the doubly linked list
 * Return: the length of the double linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *actual = h;
	size_t len = 0;

	while (actual)
	{
		printf("%i\n", actual->n);
		actual = actual->next;
		len++;
	}
	return (len);
}
