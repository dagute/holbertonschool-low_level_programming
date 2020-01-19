#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *node;
	char *sen = "";

	if (ht == NULL)
		return;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		node = (ht->array[x]);
		if (node != NULL)
		{
			printf("%s", sen);
			printf("'%s': '%s'", node->key, node->value);
			sen = ", ";
			node = node->next;
		}
	}
	printf("}\n");
}
