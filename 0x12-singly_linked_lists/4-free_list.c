#include "lists.h"
/**
 * free_list - frees a list
 * @head: pointer to head
 */
void free_list(list_t *head)
{
	list_t *f;

	while (head)
	{
		f = head;
		head = f->next;
		free(f->str);
		free(f);
	}
}
