#include "hash_tables.h"

/**
 * hash_table_set - adds a new_node
 * @ht:the hash table
 * @key: the key
 * @value: the value of the new_node
 * Return: 1 in success 0 in fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	hash_node_t *orig, *new_node;
	unsigned long int i;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	orig = ht->array[i];
	while (orig)
	{
		if (strcmp(orig->key, key) == 0)
		{
			free(orig->value);
			orig->value = strdup(value);
			if (orig->value == NULL)
				return (0);
			return (1);
		}
		orig = orig->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL  || new_node->value == NULL)
		return (0);
	new_node->next = ht->array[i];
	ht->array[i] = new_node;
	return (1);
}
