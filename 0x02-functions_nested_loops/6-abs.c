#include"main.h"
#include<stdio.h>
/**
 * _abs - a function return abs value of a number
 * @c: A Number
 * Return: postive value of number
 */
int _abs(int c)
{
	return (c * ((c > 0) - (c < 0)));
}
