#include "lists.h"

/**
 * list_len - count the number of elements in a list.
 * @h: header of the linked list;
 *
 * Return: number of nodes of the list.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));

	if (!temp)
		return (NULL);

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = *head;

	*head = temp;

	return (*head);
}
