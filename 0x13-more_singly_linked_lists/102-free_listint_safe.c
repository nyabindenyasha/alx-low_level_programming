#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: The list.
 * Return: the size of the list.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current_node;
	void *last_address, *current_address;
	unsigned int counter = 0;
	int flag = 0;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	last_address = (void *)*h;

	while (*h)
	{
		current_address = (void *)*h;
		if (current_address >= last_address && flag == 1)
		{
			*h = NULL;
			h = NULL;
			return (counter);
		}
		current_node = (*h)->next;
		(*h)->next = NULL;
		free(*h);
		*h = current_node;
		last_address = current_address;
		flag = 1;
		counter++;
	}
	h = NULL;

	return (counter);
}
