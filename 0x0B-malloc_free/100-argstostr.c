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
        char **ar;
        int i;
        int j;
        int z;
        int len;

        ar = malloc(sizeof(char *) * ac);
        i = 0;
        j = 0;

        while (i < ac)
        {
            z = 0;
            len = strlen(av[i]);
            ar[j] = malloc(sizeof(char) * len);

            while (z < len)
            {
                ar[j][z] = av[i][z];
                z++;
            }
            j++;
            ar[j][z+1] = '\n';
            j++;
            i++;
        }

        return (**ar);
    }
}
