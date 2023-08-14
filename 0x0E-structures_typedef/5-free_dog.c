#include <stdlib.h>
#include "dog.h"

/**
* free_dog - Frees memory allocated for a dog structure.
* @d: Pointer to the dog_t structure to be freed.
*
* Description: This function deallocates the memory used by a dog_t structure,
* including the dynamically allocated memory for the name and owner strings.
*/

void free_dog(dog_t *d)
{
if (d != NULL)
{
/* Free the dynamically allocated strings first */
free(d->name);
free(d->owner);

/* Then free the dog structure itself */
free(d);
}
}

