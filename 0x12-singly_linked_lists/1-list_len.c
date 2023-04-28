#include "lists.h"

/**
 * list_len - count the number of elements in a list.
 * @h: header of the linked list;
 *
 * Return: number of nodes of the list.
 */
size_t list_len(const list_t *h)
{
	size_t counter;

	counter = 0;
	while (h)
	{
		h = h->next;
		counter++;
	}

	return (counter);
}
