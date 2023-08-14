#include "dog.h"
/**
 * init_dog - check the code
 * @name: dog's name
 * @d: the dog object
 * @age: the dog's age
 * @owner: the dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

