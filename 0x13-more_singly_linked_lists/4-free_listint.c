#include "lists.h"
/**
 * free_listint - this function frees a list
 * @head: pointer to list
 */
void free_listint(listint_t *head)
{
	if (head == NULL && (*head) == NULL)
		return;
	if (head->next != NULL)
		free_listint(head->next);
	free(head);
}
