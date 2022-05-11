#include "lists.h"
/**
 * free_dlistint - add a new node at the beggining of the list
 * @head: head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	temp = head;

	if (head == NULL)
		free(head);

	while (temp->next)
	{
		temp = temp->next;
		free(temp->prev);
	}
	free(temp);
}
