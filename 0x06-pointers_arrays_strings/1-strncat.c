#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *_strncat - increament a certin number of letter to the destination
 * @dest : the array we will copy data to
 * @src : array we will copy data from
 * @n : number of letter we want to copy
 * Return: the copied string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *p = dest + strlen(dest);
	while (i != n)
	{
		*p++ = *src++;
		i++;
	}
	*p = '\0';
	return (dest);
}

