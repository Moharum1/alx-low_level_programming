#include "main.h"
/* malloc_checked - allocate memory using malloc
*@b: size of the allocated space
*return : pointer
*/
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == 0)
	{
		exit(98);
	}
	return (ptr);
}
