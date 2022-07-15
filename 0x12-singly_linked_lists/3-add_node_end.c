#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list.
 * @head: Linked list.
 * @str: The string.
 * Return: The new node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp_node;
	unsigned int length = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	while (str[length])
	{
		length++;
	}

	new_node->len = length;
	new_node->str = strdup(str);
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		temp_node = *head;
		while (temp_node->next)
		{
			temp_node = temp_node->next;
		}
		temp_node->next = new_node;
	}
	return (new_node);
}
