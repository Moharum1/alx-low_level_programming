#include <string.h>
#include "mian.h"
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
	p = malloc(sizeof(int) * (nmemb + size));

	if (nmemb == NULL || size == NULL)
	{
		return (NULL);
	}

	if (p == NULL)
	{
		return (NULL);
	}

	while (i < (nmemb + size))
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
