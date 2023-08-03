#include "main.h"

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

    // Remove spaces and punctuation, and convert to lowercase
    for (i = 0; i < length; i++)
    {
        if (_isalpha(str[i]))
        {
            cleaned_str[cleaned_length] = _tolower(str[i]);
            cleaned_length++;
        }
    }
    cleaned_str[cleaned_length] = '\0';

    // Compare characters from beginning and end inward
    for (i = 0, j = cleaned_length - 1; i < j; i++, j--)
    {
        if (cleaned_str[i] != cleaned_str[j])
        {
            return 0; // Not a palindrome
        }
    }

    return 1; // It's a palindrome
}
