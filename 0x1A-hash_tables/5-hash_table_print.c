#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: hash
 * Return: void func no return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	int indicator = 1;
	hash_node_t *orig = NULL;

	if (ht == NULL)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			orig = ht->array[i];
			while (orig != NULL)
			{
				indicator == 0 ? printf(", ") : indicator;
				printf("'%s': '%s'", orig->key, orig->value);
				indicator = 0;
				orig = orig->next;
			}
		}
	}
	printf("}\n");
}
