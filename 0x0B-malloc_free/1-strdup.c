#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to copy
 * Return: pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
    if (str == NULL)
    {
        return (NULL);
    }
    else
    {
	char *ar;
	int len;
	int i;

	len = strlen(str);
	ar = malloc(sizeof(char) * len);
	i = 0;

	while (i <= len)
	{
		ar[i] = str[i];
		i++;
	}

	return (ar);
    }
}
