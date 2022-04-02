#include "lists.h"
/**
 * delete_nodeint_at_index - this function removes a specific node
 * @head: pointer to list head
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;
	listint_t *previous;

	if (!(*head))
		return (-1);

	temp = *head;
	if (index > 0)
	{
		while (i < (index))
		{
			previous = temp;
			if (temp->next == NULL)
				return (-1);
			temp = temp->next;
			i++;
		}
	previous->next = temp->next;
	}

	(*head) = (*head)->next;
	free(temp);
	return (0);
}
