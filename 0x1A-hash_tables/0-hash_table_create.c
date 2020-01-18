#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_t;

	if (size == 0)
		return (NULL);

	h_t = malloc(sizeof(hash_table_t));
	if (h_t == NULL)
		return (NULL);
	h_t->size = size;

	h_t->array = calloc(size, sizeof(hash_node_t *));
	if (h_t->array == NULL)
	{
		free(h_t);
		return (NULL);
	}
	return (h_t);
}
