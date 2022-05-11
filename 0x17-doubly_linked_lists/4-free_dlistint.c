#include "lists.h"
/**
 * add_dnodeint - add a new node at the beggining of the list
 * @head: head of the list
 * @n: data of the new node
 *
 * Return: addres of the new element
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
