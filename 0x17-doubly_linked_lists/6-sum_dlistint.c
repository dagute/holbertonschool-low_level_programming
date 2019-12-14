#include "lists.h"
/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to the head of the list
 * Return; sum of all the data, 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int suma;

	suma = 0;

	while (head)
	{
		suma += head->n;
		head =  head->next;
	}
	return (suma);
}
