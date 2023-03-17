#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
n = scanf("%d", &n);
if (n > 0)
{
printf("%d is postive", n);
}
else if (n < 0)
{
printf("%d is negative", n);
}
else
{
printf("%d is zero", n);
}
}

