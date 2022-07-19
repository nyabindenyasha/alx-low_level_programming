#include "lists.h"

/**
 * pop_listint - a function that deletes the head node and returns its data.
 * @head: Linked list.
 * Return: Data of the head node.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int num;

	if (head == NULL)
	{
		return (0);
	}

	if (*head == NULL)
	{
		return (0);
	}

	num = (*head)->n;
	temp_node = (*head)->next;
	free(*head);
	*head = temp_node;
	return (num);
}
