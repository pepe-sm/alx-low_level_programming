#include"lists.h"

/**
 * dlistint_len - returns length of linked list
 * @h: poiner to node in list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);

}
