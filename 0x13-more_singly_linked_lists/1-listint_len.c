#include <stdio.h>
#include "lists.h"


/**
 * listint_len - print all the content of a linked list.
 * @h: header of the linked list;
 *
 * Return: number of nodes of the list.
 */
size_t listint_len(const listint_t *h)
{

	size_t Counter;

	Counter = 0;
	while (h)
	{
		Counter++;
		h = h->next;
	}

	return (Counter);
}
