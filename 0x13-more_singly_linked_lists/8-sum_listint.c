#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n) of a
 * listint_t linked list.
 * @head: Linked list.
 * Return: The sum of the data in the nodes.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current_node;

	for (current_node = head; current_node != NULL;
		 current_node = current_node->next)
	{
		sum += current_node->n;
	}
	return (sum);
}
