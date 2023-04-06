#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *_sqrt_recursion - return the square root of a number
 * @n : the number
 * Return: sqrt(n)
 */
int _sqrt_recursion(int n)
{
	double x = n;
	double y = 1;
	double e = 0.000001;
	while (x - y > e) 
	{
		x = (x + y) / 2;
		y = n / x;
	}
	return (x);
}
