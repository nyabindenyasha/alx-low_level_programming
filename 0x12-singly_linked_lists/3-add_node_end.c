#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - Return the len of a string.
 * @s: The string.
 * Return: Lenght of a string.
 */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node_end - a function that adds a new node at the end of a list.
 * @head: Linked list.
 * @str: The string.
 * Return: The new node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current_node, *newnode;

	if (head == NULL)
	{
		return (NULL);
	}

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (0);
	}

	current_node = *head;

	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	newnode->next = NULL;

	if (str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}

	current_node->next = newnode;
	return (newnode);
}
