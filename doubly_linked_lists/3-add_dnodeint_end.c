#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at theend of a list
 * @head: pointer to head
 * @n: integer number
 * Return: new_node or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp; /*pointer to a newly created node */
	dlistint_t *ptr; /* pointer to current list to traverse */

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	/* initialise n and prev */
	temp->n = n;
	temp->next = NULL;
	/* if head not points to anything - empty list */
	if (*head == NULL)
	{
		*head = temp; /* point head to new node */
		temp->prev = NULL;
	}
	else
	{
		ptr = *head; /*make ptr point to first node of list*/
		while (ptr->next != NULL) /*when ptr not reach last node of list */
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
		temp->prev = ptr;
	}
	return (temp);
}
