#include "lists.h"
/**
 * print_dlistint - print nodes
 * @h: head of list
 * Return: number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *head = h;
	size_t len = 0;

	while (head != NULL)
	{
		printf("%d", head->n);
		head = head->next;
		len++;
	}
	return (len);
}
