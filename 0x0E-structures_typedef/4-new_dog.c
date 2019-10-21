#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: pointer
 * @age: variable
 * @owner: pointer
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nl, ol, x;
	dog_t *snoop;

	nl = 0;
	ol = 0;

	while (name[nl++])
		;
	while (owner[ol++])
		;

	snoop = malloc(sizeof(float) + nl + ol);

	if (snoop == NULL)
		return (NULL);
	snoop->name = malloc(nl * sizeof(snoop->name));
	for (x = 0; x < nl; x++)
		snoop->name[x] = name[x];

	snoop->age = age;
	snoop->owner = malloc(ol * sizeof(snoop->owner));
	if (snoop == NULL)
		return (NULL);
	for (x = 0; x < ol; x++)
		snoop->owner[x] = owner[x];
	return (snoop);
}
