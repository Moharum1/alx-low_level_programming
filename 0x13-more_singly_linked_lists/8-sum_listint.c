#include <stdio.h>
#include "lists.h"


/**
 * get_nodeint_at_index - get the list elemnt at a given index.
 * @head: header of the linked list;
 * @index: The number of the linked list we want
 *
 * Return: Address of linked list
 */
int sum_listint(listint_t *head)
{

	listint_t *Main;
	int Sum = 0;

	Main = head;

	if (Main == NULL)
		return (0);
		

	while (Main)
	{
		Sum = Sum + Main->n;
		Main = Main->next;
	}

	return (Sum);
}
