#include "lists.h"
/**
 * insert_nodeint_at_index - this function inser at index
 * @head: pointer to list
 * @idx: index to insert
 * @n: data to insert
 * Return: pointer to new index or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp;
	listint_t *newNode;
	listint_t *previous;

	newNode = (listint_t *) malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	if (!head)
		return (NULL);
	temp = (*head);

	if (idx > 0)
	{
		while (i < idx)
		{
			if ((*head)->next == NULL)
			{
				*head = temp;
				return (NULL);
			}
			previous = (*head);
			*head = (*head)->next;
			i++;
		}

		previous->next = newNode;
		newNode->n = n;
		newNode->next = (*head);
		*head = temp;

		return (newNode);
	}
	else
	{
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
		return (*head);
	}
}
