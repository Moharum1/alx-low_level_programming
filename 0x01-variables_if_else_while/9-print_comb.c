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
if (i == 0)
{
}
else
{
putchar(' ');
}
putchar(i + '0');
if (i == 9)
{
}
else
{
putchar(',');
}
i++;
}
putchar('\n');
return (0);
}
