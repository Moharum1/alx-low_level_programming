#include"main.h"
#include<stdio.h>
/**
 * print_alphabet - Entry point
 *
 * Return : All the alphabets
 */
void print_alphabet(void)
{
for (int i = 0 , i <= 10 , i++)
{
char start = 'a';
while (start <= 'z')
{
putchar(start);
start++;
}
putchar('\n');
}
}
