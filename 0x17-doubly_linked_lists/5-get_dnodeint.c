#include "lists.h"

/**
 * get_dnodeint_at_index -returns node at given index
 * @head: points to adress of node
 * @index: position of node
 *
 * Return: return nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *Node = head;
	unsigned int j = 0;

	if (!Node)
		return (NULL);

	while (j < index && Node)
	{
		Node = Node->next;
		j++;

		if (!Node)
			return (NULL);
	}
	return (Node);
}
