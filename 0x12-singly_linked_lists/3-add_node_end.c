#include "lists.h"
/**
 * _strlen - length of a string
 * @s: string
 * Return: the length of the string
 *
 */
int _strlen(const char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * add_node_end - add a nodes at the end
 * @str: string to list
 * @head:pointer to new list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newone, *t;

	if (str == NULL)
		return (NULL);
	newone = malloc(sizeof(list_t));
	if (newone == NULL)
		return (NULL);
	newone->str = strdup(str);
	if (newone == NULL)
	{
		free(newone);
		return (NULL);
	}
	newone->len = _strlen(str);
	newone->next = NULL;
	if (*head == NULL)
	{
		*head = newone;
		return (newone);
	}
	t = *head;
	while (t->next != NULL)
	{
		t = t->next;
	}
	t->next = newone;
	return (newone);
}
