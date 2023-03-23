#include"main.h"
#include<stdio.h>
/**
 * _isupper - a function to check if input is upper case
 * @c: A Number
 * Return: if c is upper or not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
