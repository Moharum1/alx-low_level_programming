#include <stdio.h>
#include "main.h"
/**
 * print_rev - Print a String of Characters in reverse oreder
 * @str : String we want to print
 * Return: None
 */
void print_rev(char *str)
{
int len = 0;
int i = 0;
while (*str != '\0')
{
str++;
len++;
}
while ( i <= len)
{
i++;
str-- ;
printf("%c", *str);
} 
printf("\n");
}
