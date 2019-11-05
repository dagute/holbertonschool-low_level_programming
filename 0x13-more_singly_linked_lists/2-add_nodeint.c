#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: double pointer to the list
 * @n: integer
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodes;

	nodes = malloc(sizeof(listint_t));
	if (nodes == NULL)
		return (NULL);
	nodes->n = n;
	nodes->next = *head;
	*head = nodes;
	return (nodes);
}
