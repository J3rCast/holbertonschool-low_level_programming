#include "lists.h"
/**
 * create_node - create a new node
 * @n: data of the new node
 *
 * Return: the new node
 */
dlistint_t *create_node(const int n)
{
	dlistint_t *newNode;

	newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	return (newNode);
}
/**
 * add_dnodeint - add a new node at the beggining of the list
 * @head: head of the list
 * @n: data of the new node
 *
 * Return: addres of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = create_node(n);
	dlistint_t *temp = NULL;

	temp = *head;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newNode;
	newNode->prev = temp;
	newNode->next = NULL;

	return (newNode);
}
