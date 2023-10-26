#include <string.h>
#include <math.h>
#include "main.h"


/**
* binary_to_uint - used to convert binary string into a number
* @b - the String we want to convert
*
* @return - the integer but in unsigned form
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int number;

	number = 0;
	if (!b)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			int content = (int)(*b - '0');

			number = number * 2 + content;
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (number);
}
