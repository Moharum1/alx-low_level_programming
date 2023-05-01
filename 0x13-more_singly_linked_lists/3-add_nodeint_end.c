#include <stdio.h>
#include "lists.h"


/**
 * add_nodeint_end - add a new element to the list but in reverse.
 * @head: header of the linked list;
 * @n: The number we want to add to the linked list
 *
 * Return: Address of linked list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *Temp;
	listint_t *Main;

	Temp = malloc(sizeof(listint_t));

	if (!Temp)
		return (NULL);

	Temp->next = NULL;
	Temp->n = n;

	if (*head == NULL)
	{
		*head = Temp;
		return (Temp);
	}

	Main = *head;

	while(Main->next)
	{
		Main = Main->next;
	}

	Main->next = Temp;


	return (Temp);
}
