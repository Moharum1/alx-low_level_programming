#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *sqrt_recursion - return the square root of a number
 * @n : the number
 * Return: sqrt(x)
 */
double sqrt_recursive(double n, double x, double e) 
{
	double root = (x + n / x) / 2;

	if (x - root < e)
	{
		return (root);
	}
	return (sqrt_recursive(n, root, e));
}

/**
 * *_sqrt_recursion - return the square root of a number
 * @n : the number
 * Return: sqrt(x)
 */
int _sqrt_recursion(int n)
{
	double x = n;
	double e = 0.000001;

	return (sqrt_recursive(n, x, e));
}
