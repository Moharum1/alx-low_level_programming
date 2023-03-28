#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *_strcpy - copy the content of a string to another one
 * @dest : the array we will copy data to
 * @src : array we will copy data from
 * Return: the copied string
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr;
	int l = strlen(src);
	int i = 0;
	
	while (i <= l)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
