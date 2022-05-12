#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node at index
 * @h: head of the list
 * @idx: index to insert the new node
 * @n: data of the new node
 *
 * Return: addres of the new element
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = NULL;
	dlistint_t *temp = *h;
	unsigned int observer = 0;

	if (*h == NULL)
		return (NULL);

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	while (observer != idx - 1 && temp != NULL)
	{
		temp = temp->next;
		observer++;
	}

	newNode->next = temp->next;
	newNode->prev = temp;
	temp->next = newNode;
	(newNode->next)->prev = newNode;

	return (newNode);
}
