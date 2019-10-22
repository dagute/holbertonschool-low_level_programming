#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: pointer
 * @age: variable
 * @owner: pointer
 * Return: pointer or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nl, ol, x;
	dog_t *snoop;

	nl = ol = 0;

	while (name[nl++])
		;
	while (owner[ol++])
		;

	snoop = malloc(sizeof(dog_t));
	if (snoop == NULL)
		return (NULL);

	snoop->name = malloc(nl);
	if (snoop->name == NULL)
	{
		free(snoop);
		return (NULL);
	}
	for (x = 0; x < nl; x++)
		snoop->name[x] = name[x];

	snoop->age = age;

	snoop->owner = malloc(ol);
	if (snoop->owner == NULL)
	{
		free(snoop->name);
		free(snoop);
		return (NULL);
	}
	for (x = 0; x < ol; x++)
		snoop->owner[x] = owner[x];

	return (snoop);
}
