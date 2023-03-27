#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap the value of two variables
 * @a : 1st variable
 * @b : second variable
 * Return: None
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
