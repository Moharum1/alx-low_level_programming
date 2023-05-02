#include <stdio.h>
#include "lists.h"


/**
 * insert_nodeint_at_index - add the list elemnt at a given index.
 * @head: header of the linked list;
 * @idx: The number of the linked list we want
 * @n: the number to add to the list
 *
 * Return: Address of linked list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *Main;
	listint_t *tmp;
	unsigned int Counter = 0;

	tmp = malloc(sizeof(listint_t));

	if (!tmp)
		return (NULL);

	Main = *head;
	tmp->n = n;

	while (Counter < idx)
	{
		if (Main)
		{
			Main = Main->next;
			Counter++;
		}
		else
			return (NULL);
	}

	tmp->next = Main->next;
	Main->next = tmp;


	return (tmp);
}
