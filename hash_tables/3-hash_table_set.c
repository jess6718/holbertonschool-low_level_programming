#include "hash_tables.h"
/**
 * hash_table_set - add element to hash table
 * @ht: hash table for adding or updating key/value
 * @key: key but can't be empty string
 * @value: value associated with key. value must be duplicated
 * value can be an empty string
 * Return: 1 if pass or 0 if not
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *new_node;
	hash_node_t *temp;

	if (ht == NULL)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	temp = (ht->array)[index];/*point temp to existing hash node*/
	while (temp != NULL) /*if index exists, update existing node value*/
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);/*free existing temp before set new value*/
			temp->value = strdup(value);/*value must be duplicated*/
			return (1);
		}
		temp = temp->next;/*move temp pointing to next node*/
	}

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = strdup(key);/*adding hash node*/
	new_node->value = strdup(value);

	new_node->next = (ht->array)[index];
	(ht->array)[index] = new_node;

	return (1);
}
