#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
  * string_nconcat - Concat two string into one
  * @s1: 1st string
  * @s2: 2nd string
  * @n: number of contnet of second string
  *
  * Return: concated string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i;
	int l;
	int m;

	p = malloc(sizeof(char) * (*s1 + n));
	i = strlen(s1);
	l = 0;
	m = 0;

	if (p == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (l < i)
	{
		p[l] = s1[l];
		l++;
	}

	while (m < (int) n)
	{
		p[l+m] = s2[m];
		m++;
	}

	return (p);
}
