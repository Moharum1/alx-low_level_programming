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
while(j < 10)
{
if (i == 0 || j == 0)
{
}
else
{
putchar(' ');
}
putchar(i + '0');
putchar(j + '0');
if (i == 9 || j == 9)
{
}
else
{
putchar(',');
}
i++;
}
}
putchar('\n');
return (0);
}
