#include "lists.h"
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t counter = 0;

	while(current)
	{
		counter++;
		current = current->next;
	}

	return(counter);
}
