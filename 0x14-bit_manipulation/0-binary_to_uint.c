#include <string.h>
#include <math.h>
#include "main.h"

/**
 * power - return the power of a number
 * @base: the base
 * @exponent: power
 *
 * Return: the resulted value
 */

int power(int base, int exponent)
{
	int result = 1;

	while (exponent > 0)
	{
		result = result * base;
		exponent--;
	}
	return (result);
}

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: the binary number as a string
 *
 * Return: the converted value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int Number;
	int len, i;
	int x;

	len = strlen(b);
	i = 0;
	Number = 0;

	if (!b)
		return (0);

	while (i < len)
	{
		if (*b == '0' || *b == '1')
		{
			x = (int)(*b - '0');
			Number = Number + x * power(2, len - (i + 1));
			i++;
			b++;
		}
		else
			return (0);
	}

	return (Number);
}

