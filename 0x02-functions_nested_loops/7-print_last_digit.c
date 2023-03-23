#include"main.h"
#include<stdio.h>
/**
 * print_last_digit - a function return last digit of a number
 * @c: A Number
 * Return: last digit
 */
int print_last_digit(int c)
{
    int result = c % 10;
    if (result < 0)
    {
        result = result * -1;
    }
    _putchar(result+'0');
    return (result);
}
