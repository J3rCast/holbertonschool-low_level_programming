#include "hash_tables.h"
/**
 * free_list - frees a list
 *
 * @node: first node of the index
 */
void delete_list(hash_node_t *node)
{
	if (node && node->next)
		delete_list(node->next);
	if (node && node->value)
		free(node->value);
	if (node && node->key)
		free(node->key);
	if (node)
		free(node);
}

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: Hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *actual_node;

	if (ht && ht->array)
	{
		while (i < ht->size)
		{
			actual_node = (ht->array)[i];
			delete_list(actual_node);
			i++;
		}
		free(ht->array);
		free(ht);
	}
}
