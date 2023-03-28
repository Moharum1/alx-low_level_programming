#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - print second half of a String
 * @str : String we want to print
 * Return: None
 */
void puts_half(char *str)
{
	int l;
	int i = 0;

	l = strlen(str);
	while (i < l / 2)
	{
		if (l % 2 == 0)
		{
			str = str + l / 2 + i;
			printf("%c", *str);
			str = str - l / 2 - i;
			i++;  
		} 
		else
		{
			str = str + (l - 1) / 2 + i;
			printf("%c", *str);
			str = str - (l - 1) / 2 - i;
			i++;
		}
	}
	printf("\n");
}
