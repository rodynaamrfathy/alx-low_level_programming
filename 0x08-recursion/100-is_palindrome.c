#include "main.h"

/**
 * rev_string -  a function that reverses sting s in new.
 * @s: string.
 * @new: reversed string s.
 *
 * Return: nothing.
 */
void rev_string(char *s, char *new)
{
        if (*s > '\0')
        {
                rev_string(s + 1, new +1);
		*new = *s;
        }
}

/**
 * is_palindrome - a function that returns 1 if a
 * string is a palindrome and 0 if not.
 * @s: string.
 *
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	char *new = s;
	int i;
	rev_strin(s, new);

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == new[i])
		{
			return (1);
		}
	}
	
	return (0);
}
