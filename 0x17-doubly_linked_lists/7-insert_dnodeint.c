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
	unsigned int x;
	dlistint_t *new_ele, *t;

	x = 0;

	if (h == NULL)
		return (NULL);
	new_ele = malloc(sizeof(dlistint_t));
	if (!new_ele)
	{
		return (NULL);
	}

	new_ele->n = n;
	new_ele->prev = NULL;
	new_ele->next = NULL;

	if (idx == 0)
	{
		new_ele->next = *h;
		*h = new_ele;
		return (new_ele);
	}

	t = *h;
	while (t)
	{
		if (x + 1 == idx)
		{
			new_ele->next = t->next;
			t->next = new_ele;
			return (new_ele);
		}
		t = t->next;
		x++;
	}
	free(new_ele);
	return (NULL);
}
