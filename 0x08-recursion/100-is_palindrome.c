#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int length = 0;
    while (*s != '\0')
    {
        length++;
        s++;
    }
    return length;
}

/**
 * is_palindrome_helper - Recursive helper function to check if a string is a palindrome.
 * @s: The string to be checked.
 * @start: Starting index.
 * @end: Ending index.
 *
 * Return: 1 if the string is a palindrome, otherwise 0.
 */
int is_palindrome_helper(char *s, int start, int end)
{
    if (start >= end)
        return 1;

    if (s[start] != s[end])
        return 0;

    return is_palindrome_helper(s, start + 1, end - 1);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a palindrome, otherwise 0.
 */
int is_palindrome(char *s)
{
    int len = _strlen(s);
    return is_palindrome_helper(s, 0, len - 1);
}
