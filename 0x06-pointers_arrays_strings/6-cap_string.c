#include "main.h"

/**
 * is_separator - Checks if a character is a separator.
 * @c: The character to check.
 *
 * Return: 1 if c is a separator, 0 otherwise.
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
			return (1);
	}

	return (0);
}

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i;
	int x = 1; /* Set to 1 by default, as the first word is considered a word */

	for (i = 0; str[i] != '\0'; i++)
	{
		if (is_separator(str[i]))
			x = 1; /* Set x to 1 when a separator is found */
		else if (x && (str[i] >= 'a' && str[i] <= 'z'))
		/*
		 * Check if previous character was a separator
		 * and current character is lowercase
		 */
		{
			str[i] -= 32; /* Capitalize the lowercase letter */
			x = 0; /* Set x to 0, as we have already capitalized the word */
		}
		else
		{
			x = 0;
		}
	}

	return (str);
}
