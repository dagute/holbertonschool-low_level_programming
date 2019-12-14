#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to list
 * Return:  number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes;

	num_nodes = 0;

	while (h)
	{
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
