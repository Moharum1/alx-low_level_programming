#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *string_toupper - Convert every lower character into upper one
 * @c : String we want to convert
 * Return: reversed string 
 */
char *string_toupper(char *c)
{
	int i = 0;
	while (c[i] != '\0') 
	{
		if (c[i] >= 'a' && c[i] <= 'z') 
		{
			c[i] = c[i] - 32;
		}
		i++;
	}
	char *ptr = c;
	return (ptr);
}
