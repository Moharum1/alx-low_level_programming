#include<stdio.h>
/**
 * print_alphabet - Entry point
 *
 * Return : All the alphabets
 */
void print_alphabet(void)
{
char start = 'a';
while (start <= 'z')
{
_putchar(start);
start++;
}
_putchar('\n');
}
