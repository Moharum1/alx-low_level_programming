#include "lists.h"

/**
 * add_node - add a node to the list.
 * @head: header of the linked list;
 * @str : the content of the str;
 *
 * Return: address of the created node.
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
