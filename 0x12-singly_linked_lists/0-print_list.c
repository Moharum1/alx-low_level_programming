#include "lists.h"

/**
 * print_list - print all the content of a linked list.
 * @h: header of the linked list;
 *
 * Return: number of nodes of the list.
 */
size_t print_list(const list_t *h)
{
	int counter;

	if (h->str == NULL)
		printf("[0] (nil)");

	counter = 0;
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}

	return (counter);
}
