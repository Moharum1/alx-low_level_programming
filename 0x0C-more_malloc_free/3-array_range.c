#include <stdlib.h>
#include "main.h"
/**
 * array_range - Create an array with a certin range
 * @min: input
 * @max: input
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *a;
	int i , counter;

	if (min > max)
	{
		return (NULL);
	}

	counter = max - min + 1;
	a = malloc(sizeof(int) * counter);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < counter; i++, min++)
	{
		a[i] = min;
	}

	return (a);
}
