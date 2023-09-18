#include "hash_tables.h"
/**
 * key_index - finds index for key
 * @key: key used to find index
 * @size: size of the array of index values
 *
 * Return: success returns index, fail 0
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;
	unsigned long h_value;

	if (key == NULL)
	{
		return (0);
	}
	if (size == 0)
	{
		return (0);
	}
	h_value = hash_djb2(key);
	i = h_value % size;
	return (i);
}
