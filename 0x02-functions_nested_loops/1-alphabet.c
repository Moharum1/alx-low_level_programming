#include <stdio.h>
/**
 * print_alphabet - Entry point
 *
 * Return : All the alphabets
 */
void print_alphabet(void);
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
char start = 'a';
while (start <= 'z')
{
putchar(start);
start++;
}
putchar('\n');
}
