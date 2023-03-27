#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts2 - Printonly even characters
 * @str : String we want to print
 * Return: None
 */
void puts2(char *str)
{
	int l;
	int i = 0;
	l = strlen(str);
	
	while ( i < l)
	{
		if (i % 2 == 0)
		{
			printf("%c",*str);
		}
		str++;
		i++;
	}
}
