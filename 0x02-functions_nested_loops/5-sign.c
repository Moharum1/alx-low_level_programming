#include"main.h"
#include<stdio.h>
/**
 * print_sign - a function that checks for sign of input
 * @c: Number
 * Return: + if int c is postive, - if c is negative , 0 otherwizei
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar("+");
		return (1);
	}
	else if (c < 0)
	{
		_putchar("-");
		return (-1);
	}
	else
	{
		_putchar"0");
		return (0);
	}
}
