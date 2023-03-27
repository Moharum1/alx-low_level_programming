#include <stdio.h>
#include "main.h"
/**
 * _puts - Print a String of Characters
 * @str : String we want to print
 * Return: None
 */
void _puts(char *str)
{
while (*str != '\0')
{
	printf("%c", *str);
	str++;
}
printf("\n");
}

