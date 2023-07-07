#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *temp;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			current = ht->array[i];

			while (current != NULL)
			{
				temp = current;
				current = current->next;
				free(temp->value);
				free(temp->key);
				free(temp);
			}
		}

	}

	free(current);
	free(ht->array);
	free(ht);
}
