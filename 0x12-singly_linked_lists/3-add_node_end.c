#include "lists.h"

/**
 * add_node_end - add a node to end of the list.
 * @head: header of the linked list;
 * @str : the content of the str;
 *
 * Return: address of the created node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp,*temp1;

	temp = malloc(sizeof(list_t));

	if (!temp)
		return (NULL);

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;
	
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	temp1 = *head;

	while (temp1->next)
		temp1 = temp1->next;

	temp1->next = temp;

	return (temp);
}
