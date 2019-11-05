#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer
 * @idx: index of the list where the new node should be added, starts at 0
 * @n: integer to add to the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *pos, *newone;

	pos = *head;
	newone = malloc(sizeof(listint_t));
	if (newone == NULL)
	{
		return (NULL);
	}
	newone->n = n;
	if (idx == 0)
	{
		newone->next = pos;
		*head = newone;
		return (newone);
	}
	while (idx > 1)
	{
		pos = pos->next;
		idx--;
		if (pos == NULL)
		{
			free(newone);
			return (NULL);
		}
	}
	newone->next = pos->next;
	pos->next = newone;
	return (newone);
}
