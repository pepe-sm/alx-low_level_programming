#include "lists.h"

/**
 * add_dnodeint_end - add node at end of list
 * @head: pointer to adress of node
 * @n: variable of integer type
 *
 * Return: return new node or null if no new node is found
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *Node = NULL, *tempNode = NULL;

	Node = malloc(sizeof(dlistint_t));
	if (!Node)
		return (NULL);

	Node->n = n;
	Node->next = NULL;

	if (!*head)
	{
		Node->next = NULL;
		Node->prev = NULL;
		*head = Node;
		return (Node);
	}
	else
		tempNode = *head;

	while (tempNode->next)
	{
		tempNode = tempNode->next;
	}


	tempNode->next = Node;
	Node->prev = tempNode;
	Node->next = NULL;
	return (Node);
}
