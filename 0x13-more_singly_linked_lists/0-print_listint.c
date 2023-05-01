#include <stdio.h>
#include "lists.h"


/**
 * print_listint - print all the content of a linked list.
 * @h: header of the linked list;
 *
 * Return: number of nodes of the list.
 */
size_t print_listint(const listint_t *h)
{

	size_t Counter;

	Counter = 0;
	while (h)
	{
		printf("%d\n", (h->n));
		Counter++;
		h = h->next;
	}

	return (Counter);
}
