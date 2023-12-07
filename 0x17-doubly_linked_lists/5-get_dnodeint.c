#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the list.
 * @index: nth node.
 * Return: nth node, if the node doesn't exist, returns NULL.
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current = 0;
	dlistint_t *point = head;

	if (head)
	{
		while (current < index && point != NULL)
		{
			current++;
			point = point->next;
		}
	}
	else
		return (NULL);

	if (point)
		return (point);
	else
		return (NULL);
}
