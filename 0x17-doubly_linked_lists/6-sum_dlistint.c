#include "lists.h"

/**
 * sum_dlistint - adds the value of all nodes in a list
 * @head: pointer to node
 *
 * Return: the sum of all node in the list or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *Node = head;
	int sum = 0;

	if (!Node)
		return (0);

	while (Node)
	{
		sum += Node->n;
		Node = Node->next;
	}

	return (sum);
}
