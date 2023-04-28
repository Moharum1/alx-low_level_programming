#include <stdio.h>
void myprint() __attribute__((constructor));
/**
 * myprint - print a sentence before main
 *
 * Return: Nothing.
 */
void myprint()
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
