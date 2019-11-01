#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t
 * @h: pointer to list
 * Return: elements of list
 */
size_t list_len(const list_t *h)
{
	int nodes;

	nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
