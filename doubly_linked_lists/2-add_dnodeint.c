#include "lists.h"
/**
 * add_dnodeint - the function that adds a new node at the begining of a list
 * @head: pointer to head
 * @n: int
 * Return: new node or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	if (head == NULL) /*head not points to anything (empty list) */
	{
		return (NULL);
	}

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	/* initialise n and prev */
	temp->n = n;
	temp->prev = NULL;
	/* if head not points to anything - empty list */
	if (*head == NULL)
	{
		*head = temp; /* point head to new node */
		temp->next = NULL;
	}
	else
	{
		temp->next = *head;
		(*head)->prev = temp;
		*head = temp; /*move head points to new node*/
	}
	return (temp);
}
