#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer to the new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
    if (ac == 0 || av == NULL)
    {
        return (NULL);
    }
    else
    {
        int i;
        int j;
        int k;
        int len;
        char *ar;

        i = 0;
        len = 0;
        while (i < ac)
        {
            j = 0;
            while (av[i][j] != '\0')
            {
                len++;
                j++;
            }
            len++;
            i++;
        }
        ar = malloc(sizeof(char) * len + 1);
        if (ar == NULL)
        {
            return (NULL);
        }
        i = 0;
        k = 0;
        while (i < ac)
        {
            j = 0;
            while (av[i][j] != '\0')
            {
                ar[k] = av[i][j];
                j++;
                k++;
            }
            ar[k] = '\n';
            k++;
            i++;
        }
        ar[k] = '\0';
        return (ar);
    }
}
