#include "hash_tables.h"
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

	if (!key || strcmp(key, "") == 0)
		return (NULL);

	newItem = malloc(sizeof(hash_node_t));
	if (newItem == NULL)
		return (NULL);

	newItem->key = malloc(strlen(key) + 1);
	if (newItem->key == NULL)
	{
		free(newItem);
		return (NULL);
	}

	newItem->value = malloc(strlen(value) + 1);
	if (newItem->value == NULL)
	{
		free(newItem);
		free(newItem->key);
		return (NULL);
	}

	strcpy(newItem->key, key);
	strcpy(newItem->value, value);

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

	if (item == NULL || !ht || value == NULL)
		return (0);

	if (current_idx == NULL)
	{
		ht->array[idx] = item;
	}
	else
	{
		item->next = ht->array[idx];
		ht->array[idx] = item;
	}

	return (1);
}
