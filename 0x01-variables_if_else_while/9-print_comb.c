#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
while (i < 10) 
{
int j = 0;
while (j < 10) 
{
putchar(i + '0');
putchar(',');
putchar(' ');
putchar(j + '0');
if (j == 9 && i == 9) 
{
putchar('\n');
} 
else 
{
putchar(',');
putchar(' ');
}
j++;
}
i++;
}
return (0);
}
