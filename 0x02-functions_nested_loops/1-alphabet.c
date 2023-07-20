#include <unistd.h>
#include "main.h"

void print_alphabet(void)
{
    char c[] = "abcdefghijklmnopqrstuvwxyz";
    int i = 0;

    while (c[i] != '\0')
    {
        _putchar(c[i]);
        i++;
    }

    _putchar('\n');
}
