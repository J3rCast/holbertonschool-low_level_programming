#include "hash_tables.h"
/**
 * hash_table_get - get the value of an index
 *
 * @ht: hash table
 * @key: key of the value that we need
 *
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL;

	if (!key || !*key || !ht)
		return (NULL);

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			temp = ht->array[i];
			while (temp)
			{
				if (strcmp(key, temp->key) == 0)
				{
					return (temp->value);
				}
				temp = temp->next;
			}
		}
	}
	return (NULL);
}
