#include "lists.h"
/**
 * get_dnodeint_at_index - get the nth node of a linked list
 * @head: pointer to head
 * @index: position to look
 * Return: return tmp or NULL if not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (head == NULL) /* empty list */
	{
		return (NULL);
	}
	i = 0;
	temp = head; /*make temp points to first node of list */
	while (i < index)
	{
		if (temp == NULL)
		{
			return (NULL);
		}
		else
		{
			temp = temp->next; /*make temp point to next node */
			i = i + 1;
		}
	}
	return (temp);
}
