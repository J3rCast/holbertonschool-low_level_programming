#include "lists.h"
/**
 * _strlen - this function return the legth of a string
 * @s: value
 *
 * Return: value
 */
int _strlen(const char *s)
{
	char n;
	int i;

	for (i = 0; (n != '\0'); i++)
	{
		n = s[i];
	}
	return (i - 1);
}
/**
 * add_node_end - this function adds a new node at the beginning
 * @head: pointer to list
 * @str: string to duplicate
 * Return: address of the new element or NULL if fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last = NULL;

	last = (list_t *) malloc(sizeof(list_t));
	if (last == NULL)
		return (NULL);
	last->str = strdup(str);
	last->len = _strlen(str);
	last->next = NULL;

	return (last);
}
