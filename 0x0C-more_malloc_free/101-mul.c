#include <stdio.h>
#include "main.h"
#include <stdlib.h>
int main(int argc , char *argv[])
{
	int res;
	int i,j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; i < argc; i++)
	{
		for (j = 0; j != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	res = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);

	return(0);
}
