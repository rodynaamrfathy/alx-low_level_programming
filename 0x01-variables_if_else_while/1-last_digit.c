#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * 
 * main - Enter Point
 *
 * Description: Randomly generates 'n'
 * and takes last digit, and checks if it is more than 5, equal zero,
 * less than zero
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX/2;
	lastdigit = n % 10;

	if (lastdigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
	else if (lastdigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastdigit);
	else if (lastdigit < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);

	return (0);
}
