#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the list.
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next = head->next;
	dlistint_t *aux;

	free(head);

	while (next)
	{
		aux = next;
		next = next->next;
		free(aux);
	}
}
