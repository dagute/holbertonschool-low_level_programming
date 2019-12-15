#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a linked list
 * @head: linked list head
 * @index: index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del_ele, *t;
	unsigned int x;

	x = 0;

	if (!head || !*head)
		return (-1);
	del_ele = *head;
	if (index == 0)
	{
		if (del_ele->next != NULL)
		{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(del_ele);
		return (1);
		}
		else
		{
			free(del_ele);
			*head = NULL;
			return (1);
		}
	}
	while (x < index - 1)
	{
		if (del_ele == NULL)
			return (-1);
		++x;
		del_ele = del_ele->next;
	}
	t = del_ele->next->next;
	if  (del_ele->next->next != NULL)
		del_ele->next->next->prev = del_ele;
	free(del_ele->next);
	del_ele->next = t;
	return (1);
}
