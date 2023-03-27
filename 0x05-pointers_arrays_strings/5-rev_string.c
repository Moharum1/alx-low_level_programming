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
 
    // Get the length of the string
    l = strlen(str);
 
    // Setting the begin_ptr
    // to start of string
    begin_ptr = str;
   
      //Setting the end_ptr the end of
      //the string
    end_ptr = str + l - 1;
 
    // Swap the char from start and end
    // index using begin_ptr and end_ptr
    while (i < (l - 1) / 2) {
        i++;
        // swap character
        ch = *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = ch;
 
        // update pointers positions
        begin_ptr++;
        end_ptr--;
    }
}
