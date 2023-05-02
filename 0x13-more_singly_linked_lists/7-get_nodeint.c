#include <stdio.h>
#include "lists.h"


/**
 * add_nodeint_end - add a new element to the list but in reverse.
 * @head: header of the linked list;
 * @n: The number we want to add to the linked list
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
