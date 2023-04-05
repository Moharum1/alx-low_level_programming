#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *_print_rev_recursion - a Function that prints a string in reverse
 * @s : the array we will print
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s+1);
		printf("%c",*s);
	}
}
