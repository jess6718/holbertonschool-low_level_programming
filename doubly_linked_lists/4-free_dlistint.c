#include "lists.h"
/**
 * free_dlistint - dlistint_t lis
 * @head: pointer to head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
