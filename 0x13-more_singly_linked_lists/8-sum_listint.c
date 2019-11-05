#include "lists.h"
/**
 * sum_listint - sum of all the data
 * @head: pointer to list
 * Return: the sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	unsigned int add;

	add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
