#include "hash_tables.h"
/**
 * hash_table_set -  a function that adds an element to the hash tablei
 * @ht:ht is the hash table you want to add or update the key/value
 * @key: is the key. key can not be an empty string
 * @value: value is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current;
	unsigned long int index;
	hash_node_t *new_node;


	if (!ht || !key || *key == '\0' || value == NULL)
	{
		return (0);
	}
	new_node = malloc(sizeof(hash_node_t));
	index = key_index((unsigned char *)key, ht->size);
	if (!new_node)
	{
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		current = ht->array[index];
		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new_node;
	}
	return (1);
}
