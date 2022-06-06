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

	newT = malloc(sizeof(hash_node_t));
	if (newT == NULL)
		return (NULL);

	newT->size = size;
	newT->array = calloc(size, sizeof(hash_node_t *));
	for (i = 0; i < size; i++)
		newT->array[i] = NULL;
	
	return (newT);
}
