#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *_strcat - add the content of the second strig to the 1st one 
 * @dest : the array we will copy data to
 * @src : array we will copy data from
 * Return: the copied string
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest + strlen(dest);
	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
