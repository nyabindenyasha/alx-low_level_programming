#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: The list.
 * Return: The loop node.
 */

listint_t *find_listint_loop(listint_t *head)
{

	listint_t *current_node;

	current_node = head;
	if (head == NULL)
	{
		return (NULL);
	}

	while (current_node)
	{
		if (current_node->next >= current_node && current_node->next != NULL)
			return (current_node->next);

		current_node = current_node->next;
	}
	return (NULL);
}
