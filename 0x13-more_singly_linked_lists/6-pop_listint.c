#include <stdio.h>
#include "lists.h"


/**
 * add_nodeint_end - add a new element to the list but in reverse.
 * @head: header of the linked list;
 * @n: The number we want to add to the linked list
 *
 * Return: Address of linked list
 */
int pop_listint(listint_t **head)
{

	listint_t *Temp;
	int content;

	if (*head == NULL)
		return (0);


	Temp = *head;
	content = Temp->n;
	free(*head);

	*head = (*head)->next;

	return(content);
}
