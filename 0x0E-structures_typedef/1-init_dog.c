#include <stddef.h>  /* For NULL */

#ifndef INIT_DOG_C
#define INIT_DOG_C


/**
 * init_dog - Initializes a struct dog with provided values.
 * @d: Pointer to the struct dog variable to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This function initializes the elements of a struct dog with the
 * provided name, age, and owner values.
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

#endif

