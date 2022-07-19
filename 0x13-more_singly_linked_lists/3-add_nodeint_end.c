#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of the list.
 * @head: Linked list.
 * @n: The number.
 * Return: The new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	current_node = *head;
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}

	current_node->next = new_node;
	return (new_node);
}
