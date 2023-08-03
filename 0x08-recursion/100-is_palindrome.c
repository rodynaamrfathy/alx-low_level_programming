#include "main.h"

/**
 * is_alpha - checks if a character is an alphabet.
 * @c: The character to check.
 *
 * Return: 1 if the character is an alphabet, 0 otherwise.
 */
int is_alpha(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * to_lower - converts a character to lowercase.
 * @c: The character to convert.
 *
 * Return: The lowercase version of the character.
 */
char to_lower(char c)
{
    return (c >= 'A' && c <= 'Z' ? c + 32 : c);
}

/**
 * _strlen - returns the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(const char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        i++;
    }

    return (i);
}

/**
 * is_palindrome - checks if a string is a palindrome.
 * @str: The input string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(const char *str)
{
    int length = _strlen(str);
    int i, j;

    char cleaned_str[length + 1];
    int cleaned_length = 0;

    /* Remove spaces and punctuation, and convert to lowercase */
    for (i = 0; i < length; i++)
    {
        if (is_alpha(str[i]))
        {
            cleaned_str[cleaned_length] = to_lower(str[i]);
            cleaned_length++;
        }
    }
    cleaned_str[cleaned_length] = '\0';

    /* Compare characters from beginning and end inward */
    for (i = 0, j = cleaned_length - 1; i < j; i++, j--)
    {
        if (cleaned_str[i] != cleaned_str[j])
        {
            return 0; /* Not a palindrome */
        }
    }

    return 1; /* It's a palindrome */
}
