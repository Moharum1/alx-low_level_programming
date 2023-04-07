#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *is_prime_number - call check_is_prime function
 * @n : the number
 * Return: bool
 */
int is_prime_number(int n)
{
	return check_is_prime(n,2);
}
int check_is_prime(int n , int other);

/**
 * *check_is_prime - check the condition of the prime
 * @n : the number
 * @other : the comparator
 * Return: boolean indicator
 */
int check_is_prime(int n , int other)
{
	if (other >= 2 && n > 1)
	{
		return (1);
	}
	else if (n % other ==  0 || n <= 1 )
	{
		return (0);
	}
	else
	{
		return check_is_prime(n,other+1);
	}
}
