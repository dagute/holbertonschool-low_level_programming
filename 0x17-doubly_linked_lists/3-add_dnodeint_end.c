#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer that point to the list
 * @n: number to be add
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *t, *new_ele;

	new_ele = malloc(sizeof(dlistint_t));
	if (new_ele == NULL)
		return (NULL);

	new_ele->n = n;
	new_ele->next = NULL;

	if (*head == NULL)
	{
		new_ele->prev = NULL;
		*head = new_ele;
		return (new_ele);
	}
	t = *head;
	while (t->next)
	{
		t = t->next;
	}
	t->next = new_ele;
	new_ele->prev = t;

	return (new_ele);
}
