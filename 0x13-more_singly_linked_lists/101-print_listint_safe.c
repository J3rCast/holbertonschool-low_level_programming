#include "lists.h"
/**
 * print_listint - this function print all the elements of a int list_t list
 * @h: pointer to list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int nodeNumber = 0;

	if (!head)
		exit (98);

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)&head->n, head->n);
		head = head->next;
		nodeNumber++;
	}

	return (nodeNumber);
}
