#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_array - print the elements of an array
 * @a : the array we want to print
 * @n : number of elements of the array
 * Return: None
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(",");
			printf(" ");
			printf("%d", a[i]);
		}
		i++;
	}
	printf("\n");
}
