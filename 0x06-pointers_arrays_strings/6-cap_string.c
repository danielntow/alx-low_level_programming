#include "main.h"
#include <ctype.h>
#include <string.h>


/**
 *cap_string - change all lower case to upper
 *@a: a pointer variable
 *Return: a pointer
 */

char *cap_string(char *a)
{
	int i;
	int j;
	int size = strlen(a);
	char *delimit = ",;.!?\"(){}\n\t ";
	*a = toupper(toascii(*a));

	for (i = 0; i < size && size > 1; i++)
	{
		char m = *(a + i);
		int charint = toascii(*(a + 1 + i));

		for (j = 0; j < 13 && (i + 1) < size; j++)
		{
			if (m == *(delimit + j))
			{
				*(a + i + 1) = toupper(charint);
			}
		}
	}
	return (a);
}
