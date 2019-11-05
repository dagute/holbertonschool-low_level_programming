#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *t;

	while (head && *head)
	{
		t = *head;
		*head = t->next;
		free(t);

	}
	head = NULL;
}
