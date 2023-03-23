#include"main.h"
#include<stdio.h>
/**
 * print_numbers - print all the number from 1 to 9 
 * Return: All numbers from 1 to 9
 */
void print_numbers(void)
{
	for (int i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
}
