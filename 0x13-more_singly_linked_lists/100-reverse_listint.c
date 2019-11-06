#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ant, *sig;

	ant = NULL;

	while (*head)
	{
		sig = (*head)->next;
		(*head)->next = ant;
		ant = *head;
		*head = sig;
	}
	*head = ant;
	return (*head);
}
