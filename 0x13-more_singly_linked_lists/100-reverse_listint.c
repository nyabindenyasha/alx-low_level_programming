#include "lists.h"

/**
  *reverse_listint - a function that reverses a list passed.
  * @head: Linked list.
  * Return: First node of the list reversed.
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current_node, *temp;
	listint_t *prev = NULL;

	current_node = *head;
	while (current_node != NULL)
	{
		temp = current_node->next;
		current_node->next = prev;
		prev = current_node;
		current_node = temp;
	}
	*head = prev;
	return (*head);
}

