#include "lists.h"

/**
 * print_dlistint - the function prints all the elements of a dlistint_t list
 * @h: head node
 * Description: print all the elements of a dlistint_t list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	if (h == NULL) /* if pointer h is not pointing to anything */
	{
		return (0);
	}
	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next; /* moving pointer to next node */
		count = count + 1;
	}
	return (count);
}
