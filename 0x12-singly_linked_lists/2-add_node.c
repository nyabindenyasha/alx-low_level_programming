#include "lists.h"
#include <string.h>

/**
 * add_node - a function that adds a new node at the beginning of a list.
 * @head: pointer to a list_t pointer that points to the head of a list.
 * @str: pointer to string that adds as node
 * Return: pointer to new head of list, NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp_node;
	int length = 0;

	temp_node = malloc(sizeof(list_t));
	if (temp_node == NULL)
	{
		return (NULL);
	}

	while (str[length])
	{
		length++;
	}

	temp_node->len = length;
	temp_node->str = strdup(str);
	temp_node->next = *head;
	*head = temp_node;
	return (temp_node);
}
