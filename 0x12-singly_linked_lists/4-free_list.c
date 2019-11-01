#include "lists.h"
/**
 * free_list - frees a list
 * @head: pointer to head
 */
void free_list(list_t *head)
{
	list_t *f, *e;

	f = head;

	while (f != NULL)
	{
		e = f->next;
		free(f->str);
		free(f);
		f = e;
	}
}
