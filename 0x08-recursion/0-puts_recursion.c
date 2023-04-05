#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *_puts_recursion - a Function that prints a string
 * @s : the array we will print
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	printf("%c",*s);
	s++;
	if (*s == '\0')
	{
		printf("\n");
	}
	else
	{
		_puts_recursion(s);
	}
}
