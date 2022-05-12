#include "lists.h"
/**
 * get_dnodeint_at_index - get the index node
 * @head: head of the list
 * @index: index to get
 *
 * Return: addres of the index node
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;
	int result = 0;

	temp = head;

	if (head == NULL)
		return (result);

	while (temp != NULL)
	{
		result = result + temp->n;
		temp = temp->next;
	}

	return (result);
}
