#include "lists.h"
/**
 * dlistint_len - number of elements in a linked list
 * @h: pointer to head
 * Return: count
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	if (h == NULL) /* if pointer h is not pointing to anything */
	{
		return (0);
	}

	count = 0;
	while (h != NULL) /* when h doesn't reach end of the list */
	{
		h = h->next;
		count = count + 1;
	}
	return (count);
}
