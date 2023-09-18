#include "lists.h"

/**
 * sum_dlistint - the function thatcaculate the sum of all the data;
 * @head: pointer to the dlistint_t
 * Description: calculate the sum of all the data;
 * Return: the sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL) /* empty list */
	{
		return (0);
	}

	sum = 0;
	while (head->next != NULL) /* can directly use head to traverse */
	/* instead of creating a new point to node */
	{
		sum = sum + head->n;
		head = head->next;
	}
	sum = sum + head->n;
	return (sum);

}
