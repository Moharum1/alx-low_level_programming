#include <stdio.h>
#include "main.h"
/**
 * _puts - Print a String of Characters
 * @str : String we want to print
 * Return: None
 */
void _puts(char *str)
{
int len = 0;
int i = 0;
while (*str != '\0')
{
	str++;
        len++;
}
while ( i <= len)
{
str-- ;
printf("%c", *str);
} 
printf("\n");
}
