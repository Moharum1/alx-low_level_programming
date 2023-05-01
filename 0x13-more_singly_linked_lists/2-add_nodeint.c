#include <stdio.h>
#include "lists.h"


/**
 * add_nodeint- add a new element to the list but in reverse.
 * @head: header of the linked list;
 * @n: The number we want to add to the linked list
 *
 * Return: Address of linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *Temp;

	Temp = malloc(sizeof(listint_t));

	if (!Temp)
		return (NULL);

	Temp->next = *head;
	Temp->n = n;

	*head = Temp;

	return (*head);
}
