#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - Print a String of Characters
 * @str : String we want to print
 * Return: None
 */
void rev_string(char* str)
{
int l, i=0;
char *begin_ptr, *end_ptr, ch;
 
l = strlen(str);
 
begin_ptr = str;
   
end_ptr = str + l - 1;

while (i < (l - 1) / 2) {
i++;
ch = *end_ptr;
*end_ptr = *begin_ptr;
*begin_ptr = ch;
 
begin_ptr++;
end_ptr--;
}
}
