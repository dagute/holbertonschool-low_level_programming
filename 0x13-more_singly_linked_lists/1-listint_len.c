#include "lists.h"
/**
 * listint_len - prints the number of elements in a linked lists
 * @h: pointer to list
 * Return:the number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
