#include "main.h"

/**
 * _strcmp - Write a function that compares two strings.
 * @s1: first string.
 * @s2: 2nd string.
 *
 * Return: always 0 (success)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-15);
		else if (s1[i] == s2[i])
			return (0);
		else if (s1[i] > s2[i])
			return (15);
		i++;
	}

	/**
	 * one of the strings had ended
	 */
	if (s1[i] < s2[i])
		return (-15);
	if (s1[i] == s2[i])
		return (0);
	else
		return (15);
}
