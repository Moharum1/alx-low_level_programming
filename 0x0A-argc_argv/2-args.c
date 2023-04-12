#include <stdio.h>
#include "main.h"
/**
 * main - Prints all the given arguments
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count = 0;

	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	printf("\n");
	return (0);
}
