#include "lists.h"

/**
 * print_list - print every node
 * @h: a pointer to head node
 *
 * Description: print every node
 * Return: the number of nodes or -1 if failes
 */
size_t print_list(const list_t *h)
{
	size_t count;

	if (h == NULL) /* if pointer h is not pointing to anything */
	{
		return (0);
	}
	count = 0;
	while (h != NULL) /* when h doesn't reach end of the list */
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		count = count + 1;
		h = h->next; /* h now is pointing second node of list */
	}
	return (count);
}
