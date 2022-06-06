#include "hash_tables.h"
/**
 * key_index - this function assing an index
 * to a key
 *
 * @key: Key to assign
 * @size: size of the array
 *
 * Return: an index for akey
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;

	return (index);
}
