#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list.
 * @head: pointer to the list.
 * Return: sum of all data in the list, 0 if the lost is empty.
 **/
int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;
	dlistint_t *current;

	current = head;

	if (current == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		printf("%i\n", current->n);
		current = current->next;
	}

	return (sum);
}
