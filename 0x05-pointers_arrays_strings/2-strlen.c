#include <stdio.h>
#include "main.h"
/**
 * _strlen - Get the lenght of a String
 * @s : String 
 * Return: lenght of the String S
 */
int _strlen(char *s)
{
int len;
len = 0;
while (*s != '\0')
{
	len++;
	s++;
}
return (len);
}
