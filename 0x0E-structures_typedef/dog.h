#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct contains dog info
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description - a struct contains dog info
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - Typedef a new name for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
