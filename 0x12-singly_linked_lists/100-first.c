#include <stdio.h>

/**
 * my_constructor_function - Function executed before main.
 *
 * Description: This function is designated to execute automatically before
 * the main function when the program starts. It uses the constructor
 * attribute to achieve this behavior. The function prints two lines from
 * the poem "The Tortoise and the Hare" by Aesop.
 */
void my_constructor_function(void) __attribute__((constructor));

void my_constructor_function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
