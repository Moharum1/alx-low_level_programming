#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all the arguments it receives
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
		int result = 1;

		while (i < argc)
		{
			result = result * atoi(argv[i]);
			i++;
		}
		printf("%d\n", result);
		return (0);
	}
}
