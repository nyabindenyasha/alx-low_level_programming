#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements in the list.
 * @h: A pointer to listint structure
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t sum_of_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		sum_of_nodes++;
	}
	return (sum_of_nodes);
}
