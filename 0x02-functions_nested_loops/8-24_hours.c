#include"main.h"
#include<stdio.h>
/**
 * jack_bauer - a function that print every minuite in day
 * it takes nothing
 * Return: 0 
 */
void jack_bauer(void)
{
    int i = 00;
    int j = 00;
    while (i <= 23)
    {
        while(j <= 60)
        {
		_putchar((h / 10) + '0');
		_putchar((h % 10) + '0');
		_putchar(':');
		_putchar((m / 10) + '0');
		_putchar((m % 10) + '0');
		_putchar('\n');
        }
    }
}
