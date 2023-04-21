#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - print all the number separated by the a character
 * @n: Number of arguments;i
 * @separator: the string we use for separation
 *
 * Return: sum of the numbers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0)
		return;

	va_start(ap, n);


	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && (i < n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
