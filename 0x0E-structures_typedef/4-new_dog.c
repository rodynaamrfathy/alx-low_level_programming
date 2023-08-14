#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog -  a function that creates a new dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner name.
 *
 * Return: Return NULL if the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
