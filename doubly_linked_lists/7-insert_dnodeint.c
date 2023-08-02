#include "lists.h"

 /**
 * insert_dnodeint_at_index - function insert a new node at a given position
 * @h: pointer to the dlistint_t
 * @idx: the idxth of node (position)
 * @n: the value of the insert node
 * Description:insert a new node at a given position
 * Return: the address of the new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *ptr1, *ptr2;
	unsigned int i = 0;

	ptr1 = *h;
	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else
	{
		while (i < idx - 1)
		{
			ptr1 = ptr1->next;
			i = i + 1;
		}
		ptr2 = ptr1->next; /* point ptr2 to position after index */
		if (ptr1->next == NULL) /*checking whether insert node at the end of list*/
		{
			return (add_dnodeint_end(h, n));
		}
		else
		{
			new_node = malloc(sizeof(dlistint_t)); /* create a new node */
			if (new_node == NULL)
			{
				return (NULL);
			}
			ptr1->next = new_node;
			ptr2->prev = new_node;
			new_node->prev = ptr1;
			new_node->next = ptr2;
			new_node->n = n;
		}
	}
	return (new_node);
}
