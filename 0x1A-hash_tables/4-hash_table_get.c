#include "hash_tables.h"
/**
 * hash_table_get - returns a element
 * @ht: input
 * @key: key
 * Return: value of a element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *orig = NULL;
	unsigned long int index;

	if (ht == NULL || *key == 0 || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	orig = ht->array[index];
	while (orig != NULL)
	{
		if (strcmp(orig->key, key) == 0)
			return (orig->value);
		orig = orig->next;
	}
	return (NULL);
}
