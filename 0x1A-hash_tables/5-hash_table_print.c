#include "hash_tables.h"
/**
 * hash_table_get - get the value of an index
 *
 * @ht: hash table
 * @key: key of the value that we need
 *
 * Return: value
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, count = 0;
	hash_node_t *temp = NULL;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (count >= 1)
				printf(", ");

			temp = ht->array[i];
			while (temp)
			{
				printf("\'%s\': \'%s\'", temp->key, temp->value);
				if (temp->next)
					printf(", ");
				temp = temp->next;
			}
			count++;
		}
	}
	printf("}\n");
}
