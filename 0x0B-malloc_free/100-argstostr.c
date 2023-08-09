#include "main.h"
#include <stdlib.h>

/**
 * _strlen - find length of string.
 * @s: string
 *
 * Return: int.
 */
int _strlen(char *s)
{
	int size = 0;

	for ( ; s[size] != '\0' ; size++)
	;
	return (size);
}

/**
 * argstostr -  a function that concatenates all the arguments of your program.
 * @ac: argument counter.
 * @av: argument vector.
 *
 * Return: NULL if ac == 0 or av == NULL ,NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, count = 0, nc = 0;
	char *new;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0 ; i < ac ; i++, nc++)
		nc += _strlen(av[i]);

	new = malloc(sizeof(char) * (nc + 1));
	if (new == NULL)
		return (NULL);

	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++, count++)
			new[count] = av[i][j];

		new[count] = '\n';
		count++;
	}
	new[count] = '\0';

	return (new);

}
