#include "main.h"

/**
 * wildcmp_helper - compares two strings
 * and returns 1 if they can be considered identical
 * @s1: first string
 * @s2: second string with special character *
 *
 * Return: 1 if strings can be considered identical, 0 otherwise
 */
int wildcmp_helper(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp_helper(s1, s2 + 1));

		if (*s1 == '\0')
			return (wildcmp_helper(s1, s2 + 1));

		if (wildcmp_helper(s1 + 1, s2))
			return (1);

		return (wildcmp_helper(s1, s2 + 1));
	}

	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		return (wildcmp_helper(s1 + 1, s2 + 1));
	}

	return (0);
}

/**
 * wildcmp - compares two strings and returns 1
 * if they can be considered identical
 * @s1: first string
 * @s2: second string with special character *
 *
 * Return: 1 if strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_helper(s1, s2));
}
