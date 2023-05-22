#include "dog.h"

/**
 * init_dog - initializes a dog structure
 * @d: is a dog structure
 * @name: is the name of the dog
 * @age: is the age of the dog
 * @owner: is the owner of the dog
 * Return: nothing!
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
