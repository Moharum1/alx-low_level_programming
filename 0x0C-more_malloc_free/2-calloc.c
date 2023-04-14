#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of each element
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	int i;

	i = 0;
	p = malloc(nmemb + size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	if (p == NULL)
	{
		return (NULL);
	}

	while (i < (int) (nmemb + size))
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
