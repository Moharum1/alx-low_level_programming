#include"main.h"
#include<stdio.h>
/**
 * _isalpha - a function that checks for lowercase character
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if ( c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0)
	}
}
