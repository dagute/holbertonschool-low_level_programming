#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *newone;
	int index;

	if (!value || !key || !!ht)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		node = ht->array[index];
		while (node != NULL)
		{
			if (strcmp(node->key, key) == 0)
			{
				free(node->value);
				node->value = strdup(value);
				if (node->value == NULL)
					return (0);
				else
					return (1);
			}
			node = node->next;
		}
	}
	newone = malloc(sizeof(hash_node_t));
	if (newone == NULL)
		return  (0);
	newone->key = strdup(key);
	if (newone->key == NULL)
		return (0);
	newone->value = strdup(value);
	if (newone->value == NULL)
	{
		free(newone->key);
		free(newone);
		return (0);
	}
	newone->next = ht->array[index];
	ht->array[index] = newone;
	return (1);
}
