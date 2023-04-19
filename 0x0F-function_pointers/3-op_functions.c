#include <stdio.h>
#include "3-calc.h"


/**
 * op_add - add two number
 * @a : 1st number
 * @b: 2nd number
 * Return: int.
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - add two number
 * @a : 1st number
 * @b: 2nd number
 * Return: sub of two numbers.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mult two number
 * @a : 1st number
 * @b: 2nd number
 *
 * Return: mult two numbers.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two number
 * @a: 1st number
 * @b: 2nd number
 * Return: Nothing.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (a / b);
}

/**
 * op_mod - get mod of a number
 * @a : 1st number
 * @b: 2nd number
 *
 * Return: Nothing.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (a % b);

}
