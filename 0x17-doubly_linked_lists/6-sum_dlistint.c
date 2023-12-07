#include "lists.h"
int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;
	dlistint_t *current;

	current = h;

	while (current != NULL)
	{
		sum += current->n;
		printf("%i\n", current->n);
		current = current->next;
	}

	return (sum);
}
