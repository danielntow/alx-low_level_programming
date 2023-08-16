#include <stddef.h> /* for null */

/**
 * print_name - Prints a name using a given printing function.
 * @name: The name to be printed.
 * @f: A function pointer to the printing function.
 *
 * This function takes a name and a function pointer as arguments,
 * and uses the provided function to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}

	f(NULL);

}

