#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *reverse_array - reverse the content of array 
 * @a : array we want to reverse
 * @n : number of elements in the array
 * Return: null
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;
	while (i < n/2)
	{
		temp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = temp;
		i++;
	}
}
