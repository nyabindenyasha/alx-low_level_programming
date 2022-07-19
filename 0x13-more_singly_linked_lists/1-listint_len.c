#include "lists.h"
#include <stdio.h>

/**
 * listint_len - a function that returns the number of elements in the list.
 * @h: A pointer to listint_t structure
 * Return: number of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t sum_of_nodes = 0;

	while (h)
	{
		h = h->next;
		sum_of_nodes++;
	}
	return (sum_of_nodes);
}
