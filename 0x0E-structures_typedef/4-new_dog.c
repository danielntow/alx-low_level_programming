#include <stdio.h>
#include <stdlib.h> /* For malloc, free */
#include <string.h> /* For strlen, strcpy */

#include "dog.h"

/**
 * new_dog - Creates a new dog with copied name and owner.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: Pointer to the newly created dog_t structure.
 *         Returns NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL)
		return (NULL);

	dog_t *new_d = malloc(sizeof(dog_t));

	if (new_d == NULL)
		return (NULL);

	char *name_copy = malloc(strlen(name) + 1);

	if (name_copy == NULL)
	{
		free(new_d);
		return (NULL);
	}
	strcpy(name_copy, name);

	char *owner_copy = malloc(strlen(owner) + 1);

	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_d);
		return (NULL);
	}
	strcpy(owner_copy, owner);

	new_d->name = name_copy;
	new_d->age = age;
	new_d->owner = owner_copy;

	return (new_d);
}

