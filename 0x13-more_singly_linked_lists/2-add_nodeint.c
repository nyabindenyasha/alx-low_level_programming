#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of a
 * listint_t list.
 * @head: Linked list.
 * @n: The string.
 * Return: New node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node_added;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node_added = malloc(sizeof(listint_t));

	if (new_node_added == NULL)
	{
		return (NULL);
	}

	new_node_added->n = n;
	new_node_added->next = *head;
	*head = new_node_added;
	return (new_node_added);
}
