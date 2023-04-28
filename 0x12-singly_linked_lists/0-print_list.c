#include "lists.h"

/**
 * print_list - print all the content of a linked list.
 * @h: header of the linked list;
 *
 * Return: number of nodes of the list.
 */
size_t print_list(const list_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			counter++;
		}
	}

	return (counter);
}
