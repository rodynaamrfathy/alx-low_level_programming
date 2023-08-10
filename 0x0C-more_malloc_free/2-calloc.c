#include "main.h"
#include <stdlib.h>

/**/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(sizeof(size) * nmemb);
	if (ptr == NULL)
		return (NULL);

	for ( ; i < nmemb ; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
