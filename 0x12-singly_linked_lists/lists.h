#ifndef SINGLE_LINK
#define SINGLE_LINK

/**
 * struct LinkedList - a singly linked list node containing a string and its length
 * @str: the string
 * @len: the length
 */
typedef struct LinkedList
{
	char *str;
	int len;
	struct LinkedList *next;
} list_t;

size_t print_list(const list_t *h);

#endif
