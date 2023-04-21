#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - print all the string separated by the a character
 * @n: Number of arguments
 * @separator: the string we use for separation
 *
 * Return: sum of the numbers.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	if (n == 0)
		return;

	va_start(ap, n);


	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", str);

		if (separator != NULL && (i < n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
