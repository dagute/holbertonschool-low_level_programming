#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning
 * @head: double pointer and head of the liknked list
 * @n: number to add to the list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_ele;

	if (head == NULL)
		return (NULL);

	new_ele = malloc(sizeof(dlistint_t));
	if (new_ele == NULL)
		return (NULL);

	new_ele->n = n;
	new_ele->next = *head;
	*head = new_ele;
	return (new_ele);
}
