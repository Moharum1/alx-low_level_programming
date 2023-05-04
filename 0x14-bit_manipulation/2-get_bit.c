#include "main.h"

/**
 * get_bit - return the bit of the desired index
 * @n: number to be used
 * index: the place of the bit
 *
 * Return: the desired bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	n = n >> index;

	if (n)
		return((n & 1));
	else 
		return(-1);
}
