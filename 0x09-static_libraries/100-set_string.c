#include "main.h"

/**
* set_string - Sets the value of a pointer to a char.
* @s: Pointer to a pointer to a char.
* @to: Pointer to a char with the new value.
*
* Description: This function sets the value of the pointer @s to point to the
* same memory location as the pointer @to.
*/
void set_string(char **s, char *to)
{
*s = to;
}
