#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *_strcmp - compare between two string to see the longer one
 * @s1 : 1st array
 * @s2 : 2nd array
 * Return: 1 if s1 is greater and 0 otherwize
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(const unsigned char*)s1 - *(const unsigned char*)s2);
}
