#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to head of linked list
 * @index: the index of the node, starting from 0
 * Return: the nth node of list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *elem;
	unsigned int x;

	if (head == NULL)
		return (NULL);

	elem = head;
	for (x = 0; elem; ++x)
	{
		if (x == index)
			return (elem);
		elem = elem->next;
	}
	return (NULL);
}
