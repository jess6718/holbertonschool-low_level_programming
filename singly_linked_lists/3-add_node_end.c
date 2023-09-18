#include <string.h>
#include "lists.h"

/**
  * add_node_end - the function adds a new node at the endof a list
  * @head: the pointer points to head of original linked list
  * @str: The string to add to the node
  * Return: The address of the new list or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp; /*pointer to a newly created node */
	list_t *ptr; /* pointer to current list to traverse */

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	/* create a new node and st value to its element */
	temp->len = _strlen(str);
	temp->str = strdup(str);
	temp->next = NULL; /*set this node as end of list */

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL) /*traverse ptr from first node to last */
		{
			ptr = ptr->next; /* moving ptr pointing to next node */
		}
		ptr->next = temp;
	}
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
