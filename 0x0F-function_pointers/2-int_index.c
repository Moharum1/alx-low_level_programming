#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - check if the number equal a comparator or not
 * @size: number of elements in an array
 * @array : array containing the elements we want to compare
 * @cmp : pointer to the compare function
 *
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !size || !cmp)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
	
}
