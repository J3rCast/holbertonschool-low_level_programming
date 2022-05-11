#include "lists.h"
size_t print_dlistint(const dlistint_t *h)
{
	size_t elementsNumber = 0;
	const dlistint_t *temp;
	temp = h;

	if (h == NULL)
		return (EXIT_FAILURE);

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		elementsNumber++;
	}
	return (elementsNumber);
}
