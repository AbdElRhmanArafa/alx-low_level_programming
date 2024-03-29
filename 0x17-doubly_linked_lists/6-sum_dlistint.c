#include "lists.h"
/**
 * sum_dlistint - sum of node
 * @head: point of head of the list
 * Return: int of sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
