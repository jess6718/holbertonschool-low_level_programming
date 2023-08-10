#include "hash_tables.h"
/**
 * hash_table_get - retieves value for key
 * @ht: hash table
 * @key: key to look for
 *
 * Return: value for the key, fail returns NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL) /*check whether ht points to table*/
	{
		return (NULL);
	}
	/*set index value to that where key passed in*/
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];/*make node points to where ht->array[index] is*/
	while (node != NULL)/*when node not loop to last ht node*/
	{
		if (strcmp(key, node->key) == 0)
		{
			return (node->value);
		}
		node = node->next;/*move node to next ht bucket*/
	}
	return (NULL); /*if key cannot be found*/
}
