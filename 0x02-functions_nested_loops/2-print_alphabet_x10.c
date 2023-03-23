#include"main.h"
#include<stdio.h>
/**
 * print_alphabet_x10 - print all the alphabet 10 times
 *
 * Return : All the alphabets
 */
void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
char start = 'a';
while (start <= 'z')
{
putchar(start);
start++;
}
putchar('\n');
i++;
}
}
