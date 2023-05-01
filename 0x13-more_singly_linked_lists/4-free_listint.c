#include <stdio.h>
#include "lists.h"


/**
 * free_listint - free out the taken memory from heap.
 * @head: header of the linked list;
 *
 * Return: NULL
 */
void free_listint(listint_t *head)
{

	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
