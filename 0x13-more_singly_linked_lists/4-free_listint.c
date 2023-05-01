#include <stdio.h>
#include "lists.h"


/**
 * free_listint - free out the taken memory from heap.
 * @head: header of the linked list;
 *
 * Return: NULL
 */
void free_listint(listint_t *head){

	listint_t *Temp;
	listint_t *Main;


	Main = head;

	while (Main->next)
	{
		Temp = Main->next;
		free(Main);
		Main = Temp;
	}

}
