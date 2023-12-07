#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node node at a given position
 * in a dlistint_t list.
 * @h: pointer to the list.
 * @idx: position to add the node.
 * @n: data for the new node.
 * Return: the address of the new node, or NULL if it failed
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int current = 0;
	dlistint_t *point = *h;
	dlistint_t *new, *next;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	if (h)
	{
		while (current < idx - 1)
		{
			if (point == NULL)
				return (NULL);

			current++;
			point = point->next;
		}
	}
	else
		return (NULL);

	next = point->next;

	new->n = n;
	new->prev = point;
	new->next = next;

	point->next = new;

	return (new);
}
