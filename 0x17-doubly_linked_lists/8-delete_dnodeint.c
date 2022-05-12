#include "lists.h"
/**
 * linkedListLen - looks for lenght of a linked list
 * @h: head of the linked list
 *
 * Return: lenght of the list
 */
unsigned int linkedListLen(dlistint_t *h)
{
	dlistint_t *temp = h;
	unsigned int len = 0;

	if (h == NULL)
		return (0);
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}
/**
 * delete_dnodeint_at_index - delete a node at index
 * @head: head of the list
 * @index: index of the node to delete
 *
 * Return: 1 on succes, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int len = 0;

	if (head == NULL || *head == NULL || index >= len)
		return (-1);
	len = linkedListLen(*head);
	temp = *head;
	if (len == 1)
	{
		*head = NULL;
		free(temp);
		return (1);
	}
	if (index == 0)
	{
		*head = temp->next;
		(temp->next)->prev = *head;
		free(temp);
		return (1);
	}
	for (len = 0; len != index; len++)
		temp = temp->next;
	if (len == index)
	{
		(temp->prev)->next = NULL;
		free(temp);
		return (1);
	}

	(temp->prev)->next = temp->next;
	(temp->next)->prev = temp->prev;
	free(temp);
	return (1);
}
