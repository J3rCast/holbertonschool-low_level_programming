#include "lists.h"
/**
 * reverse_listint - this function reverse a linked list
 * @head: pointer to list
 * Return: address of the firs element of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *lastNode;

	if (*head != NULL)
	{
		lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}

		lastNode->next = newNode;
	}
	else
		*head = newNode;

	return (newNode);
}
