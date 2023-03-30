#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *_strncpy - copy an n number of elements from source to destination
 * @dest : the array we will copy data to
 * @src : array we will copy data from
 * @n : number of letter we want to copy
 * Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	while (i != n)
	{
		dest[i] = src[i];
		i++;
	}
	return dest;
}
