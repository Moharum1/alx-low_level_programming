#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to the 2 dimensional array, or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	if (width > 0 && height > 0)
	{
		int **ar;
		int i;
		int j;
		
		ar = malloc(sizeof(int *) * height);
		i = 0;
		
		while (i < height)
		{
			ar[i] = malloc(sizeof(int) * width);
			j = 0;
			while (j < width)
			{
				ar[i][j] = 0;
				j++;
			{
				i++;
			}
			return (ar);
			}
			else
			{
				return (NULL);
			}

}
