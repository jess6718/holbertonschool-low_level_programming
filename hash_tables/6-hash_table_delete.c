#include "hash_tables.h"

/**
 * hash_table_delete - delete hah table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *current, *tmp;

	if (ht == NULL)
	{
		return;
	}
	index = 0;
	while (index < ht->size)
	{
		current = ht->array[index];
		while (current != NULL) /* current not points to last ht node*/
		{
			tmp = current;
			current = current->next;/*move current to next node*/
			free(tmp->key);/*free node*/
			free(tmp->value);
			free(tmp);
		}
		index = index + 1;
	}
	free(ht->array);
	free(ht);
}
