#include "lists.h"

/**
  * free_listint - a function that frees a listint_t list.
  * @head: The list.
  * Return: void.
  */

void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head)
	{
		current_node = head->next;
		free(head);
		head = current_node;
	}
}
