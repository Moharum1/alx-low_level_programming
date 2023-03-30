#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * *cap_string - Cap the 1st letter in the String 
 * @c : String we want to convert
 * Return: Uppercased String
 */
char *cap_string(char *c)
{
	int i = 0;
	while (c[i] != '\0') 
	{
		if (i == 0 || isspace(c[i-1]))
		{
			if (c[i] >= 'a' && c[i] <= 'z') 
			{	
				c[i] = c[i] - 32;
			}   
		}
		i++;
	}
	return (c);
}
