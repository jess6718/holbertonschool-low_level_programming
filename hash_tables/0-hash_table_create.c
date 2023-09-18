#include "hash_tables.h"

/**
 * hash_table_create - create a Hash Table
 * @size: size of the hash table
 * Return: a pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;
	unsigned int i;

	h_table = malloc(sizeof(hash_table_t));
	if (h_table == NULL || size == 0)
	{
		return (NULL);
	}
	h_table->size = size;
	/* allocate memory to bucket of hash table array */
	h_table->array = malloc(sizeof(*h_table->array) * size);
	if (h_table->array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		h_table->array[i] = NULL; /*initialise NULL to array bucket*/
		i = i + 1;
	}
	return (h_table);
}
