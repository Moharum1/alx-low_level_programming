#include "lists.h"
/**
 * print_dlistint - print the items of a linked list
 * @h: the head of the list
 * @Return: the number of nodes in the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *current;
	const dlistint_t *pre;

	pre = h->prev;
	current = h;

	while (current != NULL)
	{
		counter++;
		printf("%i\n", current->n);
		current = current->next;
	}

	while (pre != NULL)
	{
		counter++;
		printf("%i\n", pre->n);
		pre = pre->prev;
	}

	return (counter);
}
