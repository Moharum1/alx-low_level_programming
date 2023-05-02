#include <stdio.h>
#include "lists.h"


/**
 * delete_nodeint_at_index - add the list elemnt at a given index.
 * @head: header of the linked list;
 * @idx: The number of the linked list we want
 *
 * Return: Address of linked list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *Main;
	listint_t *beforef;
	listint_t *afterf;
	unsigned int Counter = 0;

	Main = *head;

	if (index)
	{
		while (Counter < index-1)
		{
			if (Main)
			{
				Main = Main->next;
				Counter++;
			}
			else
				return (-1);
		}

		beforef = Main;

		Main = Main->next;
		if (!Main)
			return (-1);

		if (Main->next)
			afterf = Main->next;
		else 
			afterf = NULL;

		beforef->next = afterf;
		free(Main);
	}
	else 
	{
		if (Main)
		{
			beforef = *head;
			*head = (*head)->next;
			free(beforef);
		}
		else 
			return (-1);
	}

	return (1);
}
