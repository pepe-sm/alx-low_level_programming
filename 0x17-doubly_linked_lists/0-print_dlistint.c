#include"lists.h"

/**
 * print_dlistint - print element of a list
 * @h: node pointer
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node++;

		h = h->next;

	}
	return (node);
}
