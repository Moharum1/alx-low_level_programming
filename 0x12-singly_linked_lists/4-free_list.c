#include "lists.h"

/**
 * free_list - remove the list.
 * @head: header of the linked list;
 *
 * Return: nothing.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
