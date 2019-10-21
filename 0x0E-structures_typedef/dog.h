#ifndef SDOGG_H
#define SDOGG_H
/**
 * struct dog - structure
 * @name: first member
 * @age: second member
 * @owner: third member
 * Description: new type struct dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
