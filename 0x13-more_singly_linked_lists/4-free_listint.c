#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: pointer
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head;
		head = head->next;
		free(t);
	}
}
