#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: The list.
 * Return: void.
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		current_node = (*head)->next;
		free(*head);
		*head = current_node;
	}
}
