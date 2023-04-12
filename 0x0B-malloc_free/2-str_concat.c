#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to the concatenated string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL && s2 == NULL)
	{
		char *ar;

		ar = malloc(sizeof(char) * 1);
		ar[0] = '\0';
		return (ar);
	}
	else if (s1 == NULL)
	{
		CheckS1(s1);
	}
	else if (s2 == NULL)
	{
		CheckS2(s2);
	}
	else
	{
		char *ar;
		int len1;
		int len2;
		int i;
		int j;

		len1 = strlen(s1);
		len2 = strlen(s2);
		ar = malloc(sizeof(char) * (len1 + len2));
		i = 0;
		j = 0;

		while (i < len1)
		{
			ar[i] = s1[i];
			i++;
		}

		while (j < len2)
		{
			ar[i + j] = s2[j];
			j++;
		}

        ar[i+j+1] = '\0';

		return (ar);
	}
}

void CheckS1(char s1)
{
                char *ar;
                int len2;
                int i;

                len2 = strlen(s2);
                ar = malloc(sizeof(char) * len2);
                i = 0;

                while (i < len2)
                {
                        ar[i] = s2[i];
                        i++;
                }
                ar[i+1] = '\0';

                return (ar);
}

void CheckS2(char s2)
{
                char *ar;
                int len2;
                int i;

                len2 = strlen(s2);
                ar = malloc(sizeof(char) * len2);
                i = 0;

                while (i < len2)
                {
                        ar[i] = s2[i];
                        i++;
                }
                ar[i+1] = '\0';

                return (ar);

}
