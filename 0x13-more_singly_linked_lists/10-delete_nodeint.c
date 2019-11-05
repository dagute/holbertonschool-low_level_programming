#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: doble pointer to list
 * @index: the index of the node that should be deleted. starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pos, *t;
	unsigned int x;

	pos = *head;

	x = 0;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		*head = pos->next;
		free(pos);
		return (1);
	}

	while (x < index - 1)
	{
		if (pos->next == NULL)
		{
			return (-1);
		}
		pos = pos->next;
		x++;
	}
	t = pos->next;
	pos->next = t->next;
	free(t);
	return (1);
}
