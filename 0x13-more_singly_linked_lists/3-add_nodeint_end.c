#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer to list
 * @n: integer
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newone, *t;

	newone = malloc(sizeof(listint_t));
	if (newone == NULL)
	{
		return (NULL);
	}
	newone->n = n;
	newone->next = NULL;
	if (*head == NULL)
	{
		*head = newone;
		return (newone);
	}
	t = *head;
	while (t->next)
	{
		t = t->next;
	}
	t->next = newone;
	return (newone);
}
