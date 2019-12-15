#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to head
 * @idx: is the index of the list where the new node should be added
 * @n: value of the node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int x = 0;
	dlistint_t *new_ele, *t;
	size_t length;

	t = *h;
	length = dlistint_len(*h);
	if (h == NULL)
		return (NULL);
	new_ele = malloc(sizeof(dlistint_t));
	if (new_ele == NULL)
		return (NULL);
	new_ele->n = n;
	new_ele->prev = NULL;
	new_ele->next = NULL;
	if (length < idx)
	{
		free(new_ele);
		return (NULL);
	}
	if (idx == 0)
	{
		new_ele->prev = NULL;
		new_ele->next = t;
		t->prev = new_ele;
		*h = new_ele;
		return (new_ele);
	}
	while (x < idx - 1)
	{
		t = t->next;
		x++;
	}
	new_ele->next = t->next;
	new_ele->prev = t;
	t->next = new_ele;
	if (new_ele->next != NULL)
		new_ele->next->prev = new_ele;
	return (new_ele);
}
#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to list
 * Return:  number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes;

	for (num_nodes = 0; h; num_nodes++)
		h = h->next;
	return (num_nodes);
}
