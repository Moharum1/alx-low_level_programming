#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *_puts_recursion - a Function that prints a string
 * @s : the array we will print
 * Return: nothing
 */
char _puts_recursion(char *s)
{
	printf("%c",*s);
	s++;
	if (*s == '\0')
	{
		printf("\n");
		return (0);
	}
	_puts_recursion(s);
}
