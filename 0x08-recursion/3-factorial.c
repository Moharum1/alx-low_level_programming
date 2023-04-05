#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *factorial - return factorial of a number
 * @s : the number
 * Return: factorial
 */
int factorial(int n)
{
	if (n >= 0 && n <= 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (factorial(n - 1) * n);
}
