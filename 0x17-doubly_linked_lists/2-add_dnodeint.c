#include "lists.h"

/**
 * add_dnodeint - add node at beginning of list
 * @head: pointer to head
 * @n: data in int
 *
 * Return: Newely created node or null on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *Node = NULL;

	Node = malloc(sizeof(dlistint_t));
	if (!Node)
		return (NULL);

	Node->n = n;
	Node->prev = NULL;

	if (*head)
	{
		(*head)->prev = Node;
		Node->next = *head;
	}
	else
		Node->next = NULL;

	*head = Node;
	return (Node);
}
