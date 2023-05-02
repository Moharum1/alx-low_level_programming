#include <stdio.h>
#include "lists.h"


/**
 * sum_listint - get the list elemnt at a given index.
 * @head: header of the linked list;
 *
 * Return: Sum of Content of list
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
