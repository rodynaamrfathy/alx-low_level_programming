#include <stdlib.h>
#include "dog.h"

/**
 * print_dog -  a function that prints a struct dog
 * @d: pointer to struct d.
 *
 * Return: nothing.
 */
void print_dog(struct dog *d)
{
	printf("Name: %s", d->name);
	printf("Age: %f", d->age);
	printf("Owner: %s", d->owner);
}
