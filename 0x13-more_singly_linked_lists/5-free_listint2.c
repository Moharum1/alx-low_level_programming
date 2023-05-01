#include <stdio.h>
#include "lists.h"


/**
 * free_listint2 - free out the taken memory from heap.
 * @head: header of the linked list;
 *
 * Return: NULL
 */
void free_listint2(listint_t **head)
{

	listint_t **tmp = head;
	listint_t *tmp1;

	if (tmp != NULL)
	{
		while (*head != NULL)
		{
			tmp1 = *head;
			free(tmp1);
			*head = (*head)->next;
		}

		*tmp = NULL;
	}
}
