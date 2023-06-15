#include "lists.h"

/**
 * insert_dnodeint_at_index - input node at given position
 * @h: pointer to node adress
 * @idx: position to add node
 * @n: integer value
 *
 * Return: new list else return null
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *Node = NULL, *tempNode = *h;
	unsigned int i = 1;

	Node = malloc(sizeof(dlistint_t));
	if (!Node)
		return (NULL);

	Node->n = n;

	if (idx == 0)
	{
		Node = add_dnodeint(h, n);
		return (Node);
	}

	while (i < idx && tempNode)
	{
		tempNode = tempNode->next;
		i++;
	}

	if (!tempNode)
		return (NULL);

	if (!tempNode->next)
	{
		Node = add_dnodeint_end(h, n);
		return (Node);
	}

	Node->next = tempNode->next;
	Node->prev = tempNode;
	tempNode->next = Node;

	if (Node->next)
		Node->next->prev = Node;

	return (Node);
}
