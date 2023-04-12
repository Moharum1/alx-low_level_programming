#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints sum of all the arguments
 * @argv: array of pointers to strings
 * @argc: argument count
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int i = 1;
		int j = 0;
		int result = 0;

		while (i < argc)
		{
			while (argv[i][j] != '\0')
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			result = result + atoi(argv[i]);
			i++;
		}
		printf("%d\n", result);
		return (0);
	}
}
