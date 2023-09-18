#include <string.h>
#include "lists.h"

/**
  * add_node - the function adds a new node at the beginniing of a list
  * @head: the pointer points to head of original linked list
  * @str: The string to add to the node
  *
  * Return: The address of the new list or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head == NULL) /*head not points to anything (empty list) */
	{
		return (NULL);
	}

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	temp->len = _strlen(str);
	temp->next = *head; /* dereferencing head to get address of node */
	*head = temp;
	return (temp);
}

/**
* _strlen - function return length of string
* @s: return len of string
* Return: value on strlen
**/
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}
