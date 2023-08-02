#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the pointer to  dlistint_t
 * @index: the index of the node
 *
 * Description: deletes the node at index of a linked list
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr1, *ptr2;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	ptr1 = *head;
	if (index == 0)
	{
		if (ptr1 == NULL) /*if no node after ptr1 */
			return (-1);
		*head = ptr1->next; /* moves head pointing to next node */
		if (ptr1->next != NULL) /*if ptr1 is not last node */
			ptr1->next->prev = NULL;
		free(ptr1);
		return (1);
	}
	while (i < index && ptr1 != NULL)
	{
		ptr1 = ptr1->next; /* move ptr1 to last node of list */
		i = i + 1;
	}
	if (ptr1 == NULL)
	{
		return (-1);
	}
	ptr2 = ptr1->prev; /*point ptr2 to the node before ptr1 */
	ptr2->next = ptr1->next; /* link node ptr2 points to node after ptr1, */
	/*in the case where ptr1 points to last node */
	if (ptr1->next != NULL) /*ptr1 is last node */
	{
		ptr1->next->prev = ptr2;
	}
	free(ptr1);
	return (1);
}
