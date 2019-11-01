#include "lists.h"
/**
 * _strlen - length of the string
 * @s: string
 * Return: length of the string
 */
int _strlen(const char *s)
{
	unsigned int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
 * add_node - adds a node
 * @head: pointer to the new list
 * @str: string
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newone;

	newone = malloc(sizeof(list_t));
	if (newone == NULL)
		return (NULL);

	newone->str = strdup(str);
	newone->len = _strlen(str);
	if (*head != NULL)
		newone->next = *head;
	*head = newone;
	return (*head);
}
