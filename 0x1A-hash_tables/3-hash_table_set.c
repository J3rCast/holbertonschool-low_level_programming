#include "hash_tables.h"
/**
 * _strdup - returns a pointer to a newly space in memory
 *
 * @str: string
 *
 * Return: char
 */

char *_strdup(const char *str)
{
	char *x;
	char n = 'a';
	int i;
	int l;

	if (str == NULL)
	{
		return (NULL);
	}
	for (l = 0; n; l++)
	{
		n = str[l];
	}

	x = malloc(sizeof(char) * l);

	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l; i++)
	{
		x[i] = str[i];
	}
	return (x);
}
/**
 * htItem - creates a new item
 *
 * @key: key of the item
 * @value: value of the item
 *
 * Return: the new item
 */
hash_node_t *htItem(const char *key, const char *value)
{
	hash_node_t *newItem = NULL;

	if (!key || strcmp(key, "") == 0 || !*key)
		return (NULL);

	newItem = (hash_node_t *)calloc(1, sizeof(hash_node_t) + 1);
	if (newItem == NULL)
		return (NULL);

	newItem->key = _strdup(key);
	if (newItem->key == NULL)
	{
		free(newItem);
		return (NULL);
	}

	newItem->value = _strdup(value);
	if (newItem->value == NULL)
	{
		free(newItem->key);
		free(newItem);
		return (NULL);
	}

	return (newItem);
}
/**
 * hash_table_set - this fucntion add an element
 * to the hash table
 *
 * @ht: hash table to update
 * @key: key of the elemet
 * @value: value of the element
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = key_index((const unsigned char *)key, ht->size);
	hash_node_t *item = htItem(key, value);
	hash_node_t *current_idx = ht->array[idx];

	if (item == NULL || !ht || !*key || value == NULL || !key)
		return (0);

	while (current_idx)
	{
		if (strcmp(current_idx->key, key) == 0)
		{
			free(item->key);
			free(item->value);
			free(item);
			free(current_idx->value);
			current_idx->value = _strdup(value);
			return (1);
		}
		current_idx = ht->array[idx]->next;
	}

	item->next = ht->array[idx];
	ht->array[idx] = item;

	return (1);
}
