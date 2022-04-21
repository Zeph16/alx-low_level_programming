#ifndef SINGLE_LINK
#define SINGLE_LINK

#include <stdlib.h>
/**
 * struct LinkedList - node that contains a string and its length
 * @str: the string
 * @len: the length
 * @next: address of next node
 */
typedef struct LinkedList
{
	char *str;
	int len;
	struct LinkedList *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif
