#include "dog.h"
#include <stdio.h> /* For printf */

/**
 * print_dog - Prints the content of a struct dog.
 * @d: Pointer to the struct dog variable to be printed.
 *
 * Description: This function prints the content of a struct dog including its
 * name, age, and owner. If any element is NULL, "(nil)" is printed instead.
 */
void print_dog(struct dog *d)
{

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
