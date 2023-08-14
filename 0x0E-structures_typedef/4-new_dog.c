#include <stdio.h>
#include <stdlib.h> /* For malloc, free */
#include <string.h> /* For strlen, strcpy */
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog or NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;	  /* pointer to the new dog */
	char *name_copy;  /* copy of name */
	char *owner_copy; /* copy of owner */

	/* allocate memory for the new dog */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL) /* check if allocation fails */
		return (NULL);

	/* allocate memory for the name copy */
	name_copy = malloc(sizeof(char) * (strlen(name) + 1));
	if (name_copy == NULL) /* check if allocation fails */
	{
		free(new_dog); /* free the new dog */
		return (NULL);
	}

	/* allocate memory for the owner copy */
	owner_copy = malloc(sizeof(char) * (strlen(owner) + 1));
	if (owner_copy == NULL) /* check if allocation fails */
	{
		free(name_copy); /* free the name copy */
		free(new_dog);	 /* free the new dog */
		return (NULL);
	}

	/* copy name and owner to the copies */
	strcpy(name_copy, name);
	strcpy(owner_copy, owner);

	/* assign name, age and owner to the new dog */
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog); /* return the new dog */
}
