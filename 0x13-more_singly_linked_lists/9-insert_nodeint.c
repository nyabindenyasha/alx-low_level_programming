#include "lists.h"
#include "7-get_nodeint.c"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given
 * position.
 * @head: Linked list.
 * @idx: Index.
 * @n: Data into the list.
 * Return: Lenght new linked list.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev_node, *new_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	prev_node = get_nodeint_at_index(*head, idx - 1);
	if (prev_node == NULL)
		return (NULL);

	new_node->next = prev_node->next;
	prev_node->next = new_node;
	return (new_node);
}
