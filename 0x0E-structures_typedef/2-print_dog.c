#include <stdio.h>   /* For printf */
#include "dog.h"

/**
* print_dog - Prints the content of a struct dog.
* @d: Pointer to the struct dog variable to be printed.
*
* Description: This function prints the content of a struct dog including its
* name, age, and owner. If any element is NULL, "(nil)" is printed instead.
*/
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
}

