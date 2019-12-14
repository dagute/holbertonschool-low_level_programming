#include "lists.h"
/**
 * free_dlistint - free list
 * @head: pointer to head of list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	while (head)
	{
		t = head;
		head = head->next;
		t->prev = NULL;
		t->next = NULL;
		free(t);
	}
}
