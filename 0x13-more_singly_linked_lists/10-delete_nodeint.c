#include "lists.h"
#include "7-get_nodeint.c"

/**
 * delete_nodeint_at_index - Delete a node in a respective index.
 * @head: Linked list.
 * @index: Index.
 * Return: 1 if work, -1 if doesn't.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node, *current_node;

	if (head == NULL)
	{
		return (-1);
	}

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		current_node = (*head)->next;
		free(*head);
		*head = current_node;
		return (1);
	}

	prev_node = get_nodeint_at_index(*head, index - 1);
	if (prev_node == NULL)
		return (-1);

	current_node = prev_node->next;
	prev_node->next = prev_node->next->next;
	free(current_node);
	return (1);
}
