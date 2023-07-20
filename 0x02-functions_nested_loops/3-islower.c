#include "main.h"

/**
 * _islower -  checks for lowercase character.
 * @ c int input to check (ASCII value of the character).
 * Return: 1 (Success) if it is lowercase & 0 (Error) otherwise.
 */
int _islower(int c)
{
	if (c > 97 && c < 122)
	{
		return (1);
	}

	else 
	return (0);
}
