#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to the pointer to be set.
 * @to: Pointer to the char to set the pointer to.
 *
 * Return: Nothing.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
