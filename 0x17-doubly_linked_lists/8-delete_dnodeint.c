#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @head: pointer to the list.
 * @index: position of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *prev, *next;
	unsigned int counter = 0;

	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (counter < index && current != NULL)
	{
		current = current->next;
		counter++;
	}

	if (current == NULL)
		return (-1);

	prev = current->prev;
	next = current->next;

	prev->next = next;
	free(current);

	return (1);
}
