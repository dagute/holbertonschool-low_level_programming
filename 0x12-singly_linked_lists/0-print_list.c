#include "lists.h"
/**
 * print_list - print all elements of a lists
 * @h: pointer to list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h)
	{
		printf("[%d]%s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
