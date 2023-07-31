#include "lists.h"
/**
 * free_list - function that frees a list_t list
 * @head: pointer to node
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *current_n, *next_n;

	current_n = head;
	while (current_n != NULL)
	{
		next_n = current_n->next;
		free(current_n->str);/*len is not dynamically allocated*/
		/* memory so it dosen't needs explicitly deallocation */
		free(current_n);
		current_n = next_n;
	}
}
