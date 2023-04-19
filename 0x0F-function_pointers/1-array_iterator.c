#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iterate through an array and preform a function
 * @array: the array we will aterate through
 * @size : size of the array
 * @action : the function we will preform at each iteration
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !size || !action)
		return;
	int i;

	for (i = 0; i < (int)size; i++)
	{
		(*action)(array[i]);
	}
}
