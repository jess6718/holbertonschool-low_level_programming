#include "lists.h"

/**
 * list_len - function that returns number of the list
 * @h: a pointer to head node
 *
 * Description: returns numbers of the list
 * Return: number of the list
 */
size_t list_len(const list_t *h)
{
	size_t count;

	if (h == NULL) /* if pointer h is not pointing to anything */
	{
		return (0);
	}
	count = 0;
	while (h != NULL) /* when h doesn't reach end of the list */
	{
		if (h->str != NULL)
		{
			h = h->next; /* h now is pointing second node of list */
			count = count + 1;
		}
	}
	return (count);
}
