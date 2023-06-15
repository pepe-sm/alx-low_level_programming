#include "lists.h"

/**
 * free_dlistint - free memory of a list
 * @head: points to adress of a node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *Node = head, *tempNode;

	while (Node)
	{
		tempNode = Node->next;
		free(Node); /* and frees the prev node */
		Node = tempNode;
	}
}
