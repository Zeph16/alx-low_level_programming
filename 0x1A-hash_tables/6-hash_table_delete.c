#include "hash_tables.h"

/**
 * hash_table_delete - delete a table
 * @ht: hash
 * Return: void no return
 */
void hash_table_delete(hash_table_t *ht)
{

	hash_node_t *cur, *prev;
	unsigned int i = 0;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			cur = ht->array[i];
			while (cur != NULL)
			{
				prev = cur;
				free(cur->key);
				if (cur->value != NULL)
					free(cur->value);
				cur = cur->next;
				free(prev);
			}
		}
	}
	free(ht->array);
	free(ht);
}
