#include <stdio.h>
#include "lists.h"


/**
 * get_nodeint_at_index - get the list elemnt at a given index.
 * @head: header of the linked list;
 * @index: The number of the linked list we want
 *
 * Return: Address of linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	listint_t *Main;
	unsigned int Counter = 0;

	Main = head;

	while (Counter < index)
	{
		if (Main)
		{
			Main = Main->next;
			Counter++;
		}
		else
			return (NULL);
	}

	return (Main);
}
