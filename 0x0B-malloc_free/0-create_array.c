#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char
 * @size: size of the array
 * @c: char to initialize the array with*
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	if (size > 0)
	{
		char *ar;

		ar = malloc(sizeof(char) * size);

		int i = 0;
		int end = sizeof(char) * size;

		while (i < end)
		{
			ar[i] = c;
			i++;
		}
		return (ar);
	}
	else
	{
		return (NULL);
	}
}
