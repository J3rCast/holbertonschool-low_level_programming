#include "hash_tables.h"
/**
 * hash_table_create - This function creates a new
 * hash table
 *
 * @size: size of the hash table
 *
 * Return: Pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newT = NULL;
	unsigned long int i = 0;

	newT = malloc(sizeof(hash_table_t));
	if (newT == NULL)
		return (NULL);

	newT->array = malloc(sizeof(hash_node_t *) * size);
	if (newT->array == NULL)
	{
		free(newT);
		return (NULL);
	}

	newT->size = size;
	for (i = 0; i < size; i++)
		newT->array[i] = NULL;

	return (newT);
}
