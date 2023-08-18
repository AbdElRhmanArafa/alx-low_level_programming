#include "lists.h"
/**
 * add_dnodeint_end - add node to end of list
 * @head: list
 * @n: value
 * Return: list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *tempHead = *head;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (tempHead == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	while (tempHead->next != NULL)
		tempHead = tempHead->next;
	tempHead->next = newNode;
	newNode->prev = tempHead;
	return (newNode);
}
