#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a listint_t
 * linked list.
 * @head: Head of the linked list.
 * @index: Index of the node.
 * Return: The node in that index.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node;
	unsigned int counter;

	if (head == NULL)
	{
		return (NULL);
	}

	current_node = head;

	for (counter = 0; counter != index && current_node != NULL;
		 current_node = current_node->next, counter++)
	{
		;
	}

	if (current_node)
	{
		return (current_node);
	}
	else
	{
		return (NULL);
	}
}
