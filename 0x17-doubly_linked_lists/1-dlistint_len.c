#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to the list.
 * Return: number of nodes.
 **/
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
