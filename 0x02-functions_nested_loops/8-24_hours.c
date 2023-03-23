#include"main.h"
#include<stdio.h>
/**
 * jack_bauer - a function that print every minuite in day
 * it takes nothing
 * Return: 0 
 */
void jack_bauer(void)
{
    int h = 0;
    int m = 0;
    while (h <= 23)
    {
        while(m <= 60)
        {
		_putchar((h / 10) + '0');
		_putchar((h % 10) + '0');
		_putchar(':');
		_putchar((m / 10) + '0');
		_putchar((m % 10) + '0');
		_putchar('\n');
		m++;
        }
	h++;
    }
}
