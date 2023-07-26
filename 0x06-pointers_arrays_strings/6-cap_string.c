#include "main.h"
#include <stdbool.h>

/**
 * is_separator - Checks if a character is a separator.
 * @c: The character to check.
 *
 * Return: true if c is a separator, false otherwise.
 */
bool is_separator(char c)
{
    char separators[] = " \t\n,;.!?\"(){}";
    int i;

    for (i = 0; separators[i] != '\0'; i++)
    {
        if (c == separators[i])
            return true;
    }

    return false;
}

/**
 * cap_string - Capitalizes all words of a string.
 * @c: The string to be capitalized.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *c)
{
    int i;
    bool x = true; /* Set to true by default, as the first word is considered a word */

    for (i = 0; c[i] != '\0'; i++)
    {
        if (is_separator(c[i]))
            x = true; /* Set x to true when a separator is found */
        else if (x && (c[i] >= 'a' && c[i] <= 'z')) /* Check if previous character was a separator and current character is lowercase */
        {
            c[i] -= 32; /* Capitalize the lowercase letter */
            x = false; /* Set x to false, as we have already capitalized the word */
        }
    }

    return c;
}
