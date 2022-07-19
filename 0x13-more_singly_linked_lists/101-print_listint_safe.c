#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: Linked list.
 * Return: Number of nodes.
 */

size_t print_listint_safe(const listint_t *head)
{
	int counter = 0, flag = 0;
	void *last_address, *current_address;

	last_address = (void *)head;
	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		current_address = (void *)head;

		if (current_address >= last_address && flag == 1)
		{
			printf("-> [%p] %d\n", current_address, head->n);
			return (counter);
		}

		printf("[%p] %d\n", current_address, head->n);
		head = head->next;
		last_address = current_address;
		flag = 1;
		counter++;
	}

	return (counter);
}
