#include "search_algos.h"
/**
 * jump_list - searches for a value in a sorted array of
 * integers using the Jump search algorithm.
 *
 * @list: pointer to the first node of the linked list to search in
 * @size: the number of nodes in list
 * @value: value to search for
 *
 * Return: pointer to node or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *temp = NULL, *prev = NULL;
	int step = sqrt(size), stepCount = 0;

	if (list == NULL)
		return (NULL);

	temp = list;
	prev = list;

	while (stepCount < step && temp != NULL)
	{
		temp = temp->next;
		stepCount++;
	}
	stepCount = 0;

	while (prev != NULL)
	{
		printf("Value checked at index [%ld] = [%d]\n",
		temp->index, temp->n);
		if (temp->n == value)
			return (temp);
		if (temp->n > value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
			prev->index, temp->index);
			while (prev != NULL)
			{
				printf("Value checked at index [%ld] = [%d]\n",
				prev->index, prev->n);
				if (prev->n == value)
					return (prev);
				prev = prev->next;
			}
		}
		if (temp->next == NULL && value > temp->n)
		{
			prev = prev->next;
			printf("Value found between indexes [%ld] and [%ld]\n",
			prev->index, temp->index);
			while (prev != NULL)
			{
				printf("Value checked at index [%ld] = [%d]\n",
				prev->index, prev->n);
				if (prev->n == value)
					return (prev);
				prev = prev->next;
			}
		}

		while (stepCount < step && temp->next != NULL)
		{
			temp = temp->next;
			prev = prev->next;
			stepCount++;
		}
		stepCount = 0;
	}
	return (NULL);
}
