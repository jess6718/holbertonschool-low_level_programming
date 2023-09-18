#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	int flag;

	if (ht == NULL)
	{
		return;
	}
	i = 0;
	flag = 1;
	printf("{");
	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (flag != 1)
			{
				printf(", ");
			}
			flag = 0;
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
		}
		i = i + 1;
	}
	printf("}\n");
}
